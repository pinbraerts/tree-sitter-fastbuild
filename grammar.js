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

function preprocessor($, x) {
	return alias(seq(x[0], x.substr(1)), x)
}

module.exports = grammar({
	name: "fastbuild",

	extras: $ => [
		$.comment,
		$._whitespace,
		$.newline,
	],

	word: $ => $.identifier,

	supertypes: $ => [
		$.condition,
		$.primary,
		$.control_flow,
		$.directive,
		$.expression,
		$.statement,
		$.number,
	],

	inline: $ => [
		$.reference,
		$.else_directive,
		$.condition_directive,
		$.macros,
		$.body,
	],

	rules: {
		source_file: $ => optional($.body),
		comment: _ => token(/\/\/.*|;.*/),
		_whitespace: _ => token(/[\s\t]+/),
		newline: _ => token(/\r?\n/),
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
		single_quoted: _ => token.immediate(/[^^$%']+?/),
		double_quoted: _ => token.immediate(/[^^$%"]+?/),
		escape_sequence: _ => token.immediate(/\^./),
		interpolation: $ => seq(token.immediate('$'), $.identifier, '$'),
		placeholder: $ => seq(token.immediate('%'), field('number', $.number)),
		environment_variable: $ => $.identifier,

		directive: $ => choice(
			$.define,
			$.undef,
			$.if_directive,
			$.import,
			$.include,
			$.once,
		),
		define: $ => seq(
			preprocessor($, '#define'),
			$.macros,
		),
		undef: $ => seq(
			preprocessor($, '#undef'),
			$.macros,
		),
		if_directive: $ => seq(
			preprocessor($, '#if'),
			field('condition', $.condition_directive),
			optional(field('body', $.body)),
			optional($.else_directive),
			preprocessor($, '#endif'),
		),
		else_directive: $ => seq(
			preprocessor($, '#else'),
			optional(field('else', $.body)),
		),
		import: $ => seq(
			preprocessor($, '#import'),
			$.environment_variable,
		),
		include: $ => seq(
			preprocessor($, '#include'),
			$.filename,
		),
		once: $ => preprocessor($, '#once'),
		condition_directive: $ => choice(
			$.exists,
			$.file_exists,
			$.or_directive,
			$.and_directive,
			$.negate_directive,
			$.macros,
		),
		exists: $ => seq(
			'exists', '(', $.environment_variable, ')',
		),
		file_exists: $ => seq(
			'file_exists', '(', $.filename, ')',
		),
		or_directive: $ => prec.left(precedence.or, seq(
			field('lhs', $.condition_directive),
			choice('or', '||'),
			field('rhs', $.condition_directive),
		)),
		and_directive: $ => prec.left(precedence.and, seq(
			field('lhs', $.condition_directive),
			choice('and', '&&'),
			field('rhs', $.condition_directive),
		)),
		negate_directive: $ => prec(precedence.negate, seq(
			'!', $.condition_directive
		)),
		macros: $ => choice(
			$.builtin_macros,
			$.user_macros,
		),
		builtin_macros: _ => choice(
			'__LINUX__',
			'__OSX__',
			'__WINDOWS__',
		),
		user_macros: $ => $.identifier,

		macros_definition: _ => token(/.+/),

		_separator: _ => ',',
		body: $ => prec(precedence.top_level, repeat1(choice(
			$.directive,
			$.statement,
			$._separator,
		))),

		filename: _ => token(/"[\/\.\w\- ]+"/),
		identifier: _ => token(/[a-zA-Z_][\w_]*/),
		variable: $ => choice($.builtin_variable, $.identifier),
		usage: $ => seq('.', choice($.variable, $.string)),
		propagation: $ => seq('^', choice($.variable, $.string)),
		reference: $ => choice($.usage, $.propagation),
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
			$.reference,
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
		decimal: _ => token(/\d[\d_]*(\.[\d_]*)?(e[\d_]+)?/),

		array: $ => seq('{', optional($.body), '}'),
		struct: $ => seq('[', optional($.body), ']'),
		arguments: $ => seq('(', optional($.body), ')'),

		function_call: $ => prec.right(precedence.function_call, seq(
			field('name', choice($.builtin_function, $.user_function)),
			field('arguments', $.arguments),
			optional(field('body', $.array)),
		)),

		function_definition: $ => seq(
			'function',
			field('name', $.user_function),
			field('arguments', $.arguments),
			field('body', $.array),
		),

		user_function: $ => $.identifier,

		control_flow: $ => choice(
			$.for_each,
			$.if,
			$.error,
			$.print,
			$.using,
			$.settings,
		),

		error: $ => seq('Error', '(', field('message', $.string), ')'),
		print: $ => seq('Print', '(', field('message', $.string), ')'),
		using: $ => seq('Using', '(', field('struct', $.usage), ')'),
		settings: $ => seq('Settings', field('settings', $.array)),

		for_each: $ => seq(
			'ForEach', '(',
			repeat1(choice(field('iterator', $.in), $._separator)),
			')',
			field('body', $.array),
		),

		if: $ => seq(
			'If', '(',
			field('condition', $.condition),
			')',
			field('body', $.array),
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

		builtin_function: _ => choice(
			"Alias",
			"Compiler",
			"Copy",
			"CopyDir",
			"CSAssembly",
			"DLL",
			"Exec",
			"Executable",
			"Library",
			"ListDependencies",
			"ObjectList",
			"RemoveDir",
			"Test",
			"TextFile",
			"Unity",
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

	},
})
/*
%YAML 1.2
---
name: FASTBuild
file_extensions: [bff]
scope: source.bff

contexts:
  in-double-quotes:
    - match: \$\w*\$
      scope: variable.other
    - match: "[^\"]"
      scope: string.quoted.double
    - match: \"
      pop: true
      scope: string.quoted.double
  double-quoted-strings:
    - match: \"
      push: in-double-quotes
      scope: string.quoted.double

  in-single-quotes:
    - match: \$\w*\$
      scope: variable.other
    - match: "[^']"
      scope: string.quoted.single
    - match: "'"
      pop: true
      scope: string.quoted.single
  single-quoted-strings:
    - match: "'"
      push: in-single-quotes
      scope: string.quoted.single

  preprocessor-includes:
    - match: "^\\s*(#\\s*\\binclude)\\b"
      captures:
        1: keyword.control.include.c++
  preprocessor-import:
    - match: ^\s*(#)\s*\b(import)\b
      scope: keyword.control.c

  preprocessor:
    - include: scope:source.c#incomplete-inc
    - include: preprocessor-macro-define
    - include: scope:source.c#pragma-mark
    - include: preprocessor-includes
    - include: preprocessor-import
  global:
    - include: preprocessor
    - include: double-quoted-strings
    - include: single-quoted-strings
  main:
    - include: global
    - match: \b(Alias|CSAssembly|Compiler|Copy|CopyDir|DLL|Error|Exec|Executable|ForEach|If|Library|ListDependencies|ObjectList|Print|RemoveDir|Settings|Test|TextFile|Unity|Using|VCXProject|VSProjectExternal|VSSolution|XCodeProject)\b
      scope: support.function
    - match: \+|=-
      scope: keyword.operator
    - match: \,
      scope: punctuation.separator
    - match: \{
      scope: punctuation.section.block.begin
    - match: \}
      scope: punctuation.section.block.end
    - match: \.\w+|\^\w+
      scope: variable
    - match: //.*|;.*
      scope: comment.line
	  */
