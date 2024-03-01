let precedence = {
	top_level: 0,
	or: 1,
	and: 2,
	concat: 3,
	subtract: 3,
	assign: 4,
	compare: 5,
	negate: 6,
	in: 7,
	function_call: 8,
}

module.exports = grammar({
	name: "fastbuild",

	extras: $ => [
		$.comment,
		$._whitespace,
		$.newline,
		$._preprocessor,
	],

	word: $ => $.identifier,

	supertypes: $ => [
		$.condition,
		$.primary,
		$.control_flow,
		$.preprocessor_simple,
		$.expression,
		$.statement,
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
		source_file: $ => optional($.body),
		_separator:        _ => ',',
		_whitespace:       _ => token(/[\s\t]+/),                       
		comment:           _ => token(/\/\/.*|;.*/),                    
		newline:           _ => token(/\r?\n/),                         
		macros_definition: _ => token(/.+/),                            
		decimal:           _ => token(/\d[\d_]*(\.[\d_]*)?(e[\d_]+)?/), 
		filename:          _ => token(/"[\/\.\w\- ]+"/),
		identifier:        _ => token(/[a-zA-Z_][\w_]*/),               
		single_quoted:     _ => token.immediate(/[^^$%']+?/),           
		double_quoted:     _ => token.immediate(/[^^$%"]+?/),           
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
		placeholder:   $ => seq(token.immediate('%'), field('number', $.number)),

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
		variable: $ => choice($.builtin_variable, $.identifier, $.builtin_macros),
		function: $ => choice($.builtin_function, $.identifier),
		usage: $ => seq('.', choice($.variable, $.string)),
		promotion: $ => seq('^', choice($.variable, $.string)),

		body: $ => prec(precedence.top_level, repeat1(choice(
			$.preprocessor_simple,
			$.statement,
			$._separator,
		))),

		statement: $ => choice(
			$.primary,
			$.compound,
			$.array,
			$.function_call,
			$.function_definition,
			$.control_flow,
		),
		expression: $ => choice(
			$.array,
			$.struct,
			$.primary,
		),
		compound: $ => seq(
			field('reference', $.reference),
			choice($._assignment, $._operator),
			repeat($._operator),
		),
		_operator: $ => choice(
			$._concatenation,
			$._subtraction,
		),
		_assignment:    $ => seq('=', field('assign', $.expression)),
		_concatenation: $ => seq('+', field('concat', $.expression)),
		_subtraction:   $ => seq('-', field('subtract', $.expression)),
		boolean: _ => choice(
			'true', 'false'
		),
		number: $ => choice(
			$.decimal,
		),

		array: $ => seq('{', optional($.body), '}'),
		struct: $ => seq('[', optional($.body), ']'),
		arguments: $ => seq('(', optional($.body), ')'),

		function_call: $ => prec.right(precedence.function_call, seq(
			field('name', $.function),
			field('arguments', $.arguments),
			optional(field('body', $.array)),
		)),

		function_definition: $ => seq(
			'function',
			field('name', $.identifier),
			field('arguments', $.arguments),
			field('body', $.array),
		),

		control_flow: $ => choice(
			$.for_each,
			$.if,
			$.error,
			$.print,
			$.using,
			$.settings,
		),

		condition: $ => choice(
			$.primary,
			$.comparison,
			$.and,
			$.or,
			$.negate,
			$.in,
			$.not_in,
			$.parenthesis,
		),
		parenthesis: $ => seq('(', $.condition, ')'),
		comparison: $ => prec.left(precedence.compare, seq(
			field('lhs', $.condition),
			field('operator', choice('==', '!=', '<', '<=', '>', '>=')),
			field('rhs', $.condition),
		)),
		and: $ => prec.left(precedence.and, seq(
			field('lhs', $.condition),
			choice('and', '&&'),
			field('rhs', $.condition),
		)),
		or: $ => prec.left(precedence.or, seq(
			field('lhs', $.condition),
			choice('or', '||'),
			field('rhs', $.condition),
		)),
		negate: $ => prec(precedence.negate, seq(
			choice('not', '!'), $.condition,
		)),
		in: $ => prec.left(precedence.in, seq(
			field('lhs', $.primary),
			'in',
			field('rhs', $.primary),
		)),
		not_in: $ => prec.left(precedence.in, seq(
			field('lhs', $.primary),
			alias(seq('not', 'in'), 'not in'),
			field('rhs', $.primary),
		)),
		primary: $ => choice(
			$.usage,
			$.string,
			$.number,
			$.boolean,
		),


		if: $ => seq(
			'If', '(',
			field('condition', $.condition),
			')',
			field('body', $.array),
		),

		number: $ => $.decimal,
		boolean: _ => choice('true', 'false'),

		builtin_function: _ => choice(
			"Alias",
			"Compiler",
			"Copy",
			"CopyDir",
			"CSAssembly",
			"DLL",
			"Error",
			"Exec",
			"Executable",
			"ForEach",
			"Library",
			"ListDependencies",
			"ObjectList",
			"Print",
			"RemoveDir",
			"Settings",
			"Test",
			"TextFile",
			"Unity",
			"Using",
			"VCXProject",
			"VSProjectExternal",
			"VSSolution",
			"XCodeProject",
		),

		builtin_variable: _ => choice(
			"_CURRENT_BFF_DIR_",
			"_FASTBUILD_VERSION_STRING_",
			"_FASTBUILD_VERSION_",
			"_FASTBUILD_EXE_PATH_",
			"_WORKING_DIR_",
		),

		builtin_macros: _ => choice(
			'__LINUX__',
			'__OSX__',
			'__WINDOWS__',
		),

		exists: $ => seq('exists', '(', $.environment_variable, ')'),
		file_exists: $ => seq('file_exists', '(', $.filename, ')'),

	},
})
