let precedence = {
	add: 1,
	sub: 1,
	assign: 2,
	or: 3,
	and: 4,
	compare: 5,
	in: 6,
	not_in: 6,
	not: 7,
	function: 8,
}

module.exports = grammar({
	name: "fastbuild",

	extras: $ => [
		$.comment,
		$._whitespace,
		$._separator,
		$._newline,
		$._preprocessor,
	],

	word: $ => $.identifier,

	supertypes: $ => [
		$.literal,
		$.expression,
		$.number,
		$.variable,
		$.function,
		$.preprocessor_expression,
	],

	inline: $ => [
	],

	externals: $ => [
		$._preprocessor_end,
	],

	rules: {
		source_file: $ => repeat($.expression),
		_separator:        _ => ',',
		_whitespace:       _ => token(/[\s\u00A0\uFEFF\u3000]+/),                       
		// http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
		comment: _ => token(choice(
			seq(';',  /(\\+(.|\r?\n)|[^\\\n])*/),
			seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
			seq(
				'/*',
				/[^*]*\*+([^/*][^*]*\*+)*/,
				'/',
			),
		)),
		_newline:          _ => token(/\r?\n/),                         
		decimal:           _ => token(/[\d_]+/), 
		filename:          _ => token(/"[\/\.\w\- ]+"/),
		identifier:        _ => token(/[a-zA-Z_][\w_]*/),               
		single_quoted:     _ => token.immediate(prec(1, /[^^$%']+?/)),           
		double_quoted:     _ => token.immediate(prec(1, /[^^$%"]+?/)),           
		escape_sequence:   _ => token.immediate(/\^./),                 
		string: $ => choice(
			seq("'", repeat($._single_inner), "'"),
			seq('"', repeat($._double_inner), '"'),
		),
		_single_inner: $ => choice(
			$.single_quoted,
			$.interpolation,
			$.placeholder,
			$.escape_sequence,
		),
		_double_inner: $ => choice(
			$.double_quoted,
			$.interpolation,
			$.placeholder,
			$.escape_sequence,
		),
		interpolation: $ => seq(token.immediate('$'), $.identifier, '$'),
		placeholder:   $ => seq(token.immediate('%'),
			choice(field('number', $.decimal), '@', '*'),
		),

		_preprocessor: $ => seq('#', choice(
			$.preprocessor_define,
			$.preprocessor_undef,
			$.preprocessor_if,
			$.preprocessor_import,
			$.preprocessor_include,
			$.preprocessor_once,
			$.preprocessor_else,
			$.preprocessor_endif,
		), $._preprocessor_end),
		preprocessor_define: $ => seq('define', $.variable),
		preprocessor_undef: $ => seq('undef', $.variable),
		preprocessor_import: $ => seq('import', $.environment_variable),
		preprocessor_include: $ => seq('include', $.filename),
		preprocessor_if: $ => seq('if', field('condition', $.preprocessor_expression)),
		preprocessor_else: _ => "else",
		preprocessor_endif: _ => "endif",
		preprocessor_once: _ => "once",
		preprocessor_expression: $ => choice(
			$.literal,
			$.variable,
			alias($.preprocessor_not, $.not),
			alias($.preprocessor_and, $.and),
			alias($.preprocessor_or, $.or),
			$.exists,
			$.file_exists,
		),
		preprocessor_or: $ => prec.left(precedence.or, seq(
			field('left', $.preprocessor_expression),
			'||',
			field('right', $.preprocessor_expression),
		)),
		preprocessor_and: $ => prec.left(precedence.and, seq(
			field('left', $.preprocessor_expression),
			'&&',
			field('right', $.preprocessor_expression),
		)),
		preprocessor_not: $ => prec.right(precedence.not, seq(
			'!', $.preprocessor_expression,
		)),

		environment_variable: $ => $.identifier,
		variable: $ => $.identifier,
		function: $ => $.identifier,
		usage: $ => seq(choice('.', '^'), choice($.variable, $.string)),

		array: $ => seq('{', repeat($.expression), '}'),
		struct: $ => seq('[', repeat($.expression), ']'),
		arguments: $ => seq('(', repeat($.expression), ')'),
		parenthesis: $ => seq('(', $.expression, ')'),

		function_call: $ => prec.right(precedence.function, seq(
			field('name', $.function),
			field('arguments', optional($.arguments)),
			field('body', optional($.array)),
		)),

		function_definition: $ => prec.right(precedence.function, seq(
			'function',
			field('name', $.identifier),
			field('arguments', optional($.arguments)),
			field('body', optional($.array)),
		)),

		expression: $ => choice(
			$.literal,
			$.usage,
			$.array,
			$.struct,
			$.parenthesis,
			$.not,
			$.and,
			$.or,
			$.add,
			$.sub,
			$.assign,
			$.in,
			$.compare,
			$.not_in,
			$.function_call,
			$.function_definition,
			$.exists,
			$.file_exists,
			$.if,
		),

		not: $ => prec.right(precedence.not, seq(choice('not', '!'), $.expression)),

		...[
			['and', choice('&&', 'and'), precedence.and],
			['or', choice('||', 'or'), precedence.or],
			['add', '+', precedence.add],
			['sub', '-', precedence.sub],
			['compare', choice('==', '!=', '>', '<', '>=', '<='), precedence.add],
		].reduce((result, [name, operator, precedence]) => {
			result[name] = $ => prec.left(precedence, seq(
				field('left', $.expression),
				field('operator', operator),
				field('right', $.expression),
			))
			return result
		}, {}),

		...[
			['in', 'in', precedence.in],
			['not_in', alias(seq('not', 'in'), 'not in'), precedence.not_in],
			['assign', '=', precedence.assign],
		].reduce((result, [name, operator, precedence]) => {
			result[name] = $ => prec.right(precedence, seq(
				field('left', $.expression),
				field('operator', operator),
				field('right', $.expression),
			))
			return result
		}, {}),

		literal: $ => choice(
			$.string,
			$.number,
			$.boolean,
		),


		if: $ => seq(
			'If', '(',
			field('condition', $.expression),
			')',
			field('consequence', $.array),
		),

		number: $ => $.decimal,
		boolean: _ => choice('true', 'false'),
		exists: $ => seq('exists', '(', $.environment_variable, ')'),
		file_exists: $ => seq('file_exists', '(', $.filename, ')'),

	},
})
