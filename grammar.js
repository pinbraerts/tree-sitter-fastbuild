let precedence = {
  or: 2,
  and: 3,
  compare: 5,
  lookup: 6,
  not: 7,
  function: 8,
};

module.exports = grammar({
  name: "fastbuild",

  extras: ($) => [
    $.comment,
    $._whitespace,
    $._separator,
    $._newline,
    $._preprocessor,
  ],

  word: ($) => $.identifier,

  supertypes: ($) => [
    $.literal,
    $.expression,
    $.statement,
    $.number,
    $.preprocessor_expression,
  ],

  inline: ($) => [],

  externals: ($) => [$._preprocessor_end],

  rules: {
    source_file: ($) => repeat($.statement),
    _separator: (_) => ",",
    _whitespace: (_) => token(/[\s\u00A0\uFEFF\u3000]+/),
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: (_) => token(choice(/;.*/, /\/\/.*/)),
    _newline: (_) => token(/\r?\n/),
    decimal: (_) => token(/[\d_]+/),
    filename: (_) => token(/[\/\.\w\- ]+/),
    identifier: (_) => token(/[a-zA-Z_][\w_]*/),
    single_quoted: (_) => token.immediate(prec(1, /[^^$%']+?/)),
    double_quoted: (_) => token.immediate(prec(1, /[^^$%"]+?/)),
    escape_sequence: (_) => token.immediate(/\^./),
    string: ($) =>
      choice(
        seq("'", repeat($._single_inner), "'"),
        seq('"', repeat($._double_inner), '"'),
      ),
    _single_inner: ($) =>
      choice(
        $.single_quoted,
        $.interpolation,
        $.placeholder,
        $.escape_sequence,
      ),
    _double_inner: ($) =>
      choice(
        $.double_quoted,
        $.interpolation,
        $.placeholder,
        $.escape_sequence,
      ),
    interpolation: ($) => seq(token.immediate("$"), $.identifier, "$"),
    placeholder: ($) =>
      seq(token.immediate("%"), choice(field("number", $.decimal), "@", "*")),

    _preprocessor: ($) =>
      seq(
        "#",
        choice(
          $.preprocessor_define,
          $.preprocessor_undef,
          $.preprocessor_if,
          $.preprocessor_import,
          $.preprocessor_include,
          $.preprocessor_once,
          $.preprocessor_else,
          $.preprocessor_endif,
          $.preprocessor_unknown,
        ),
        $._preprocessor_end,
      ),
    preprocessor_unknown: ($) => $.identifier,
    preprocessor_define: ($) => seq("define", field("variable", $.identifier)),
    preprocessor_undef: ($) => seq("undef", field("variable", $.identifier)),
    preprocessor_import: ($) => seq("import", field("variable", $.identifier)),
    preprocessor_include: ($) => seq("include", field("filename", $.string)),
    preprocessor_if: ($) =>
      seq("if", field("condition", $.preprocessor_expression)),
    preprocessor_else: (_) => "else",
    preprocessor_endif: (_) => "endif",
    preprocessor_once: (_) => "once",
    preprocessor_expression: ($) =>
      choice(
        $.literal,
        $.identifier,
        alias($.preprocessor_not, $.not),
        alias($.preprocessor_and, $.and),
        alias($.preprocessor_or, $.or),
        alias($.preprocessor_call, $.function_call),
      ),
    preprocessor_call: ($) =>
      seq(
        field("name", $.identifier),
        "(",
        field("arguments", repeat($.preprocessor_expression)),
        ")",
      ),
    preprocessor_or: ($) =>
      prec.left(
        precedence.or,
        seq(
          field("left", $.preprocessor_expression),
          "||",
          field("right", $.preprocessor_expression),
        ),
      ),
    preprocessor_and: ($) =>
      prec.left(
        precedence.and,
        seq(
          field("left", $.preprocessor_expression),
          "&&",
          field("right", $.preprocessor_expression),
        ),
      ),
    preprocessor_not: ($) =>
      prec.right(
        precedence.not,
        seq("!", field("right", $.preprocessor_expression)),
      ),

    environment_variable: ($) => $.identifier,
    usage: ($) => seq(choice(".", "^"), choice($.identifier, $.string)),

    array: ($) => seq("{", repeat($.statement), "}"),
    struct: ($) => seq("[", repeat($.statement), "]"),
    arguments: ($) => seq("(", repeat($.statement), ")"),
    parenthesis: ($) => seq("(", $.statement, ")"),

    function_call: ($) =>
      prec.right(
        precedence.function,
        seq(
          field("name", $.identifier),
          field("arguments", optional($.arguments)),
          field("body", optional($.array)),
        ),
      ),

    function_definition: ($) =>
      prec.right(
        precedence.function,
        seq(
          "function",
          field("name", $.identifier),
          field("arguments", optional($.arguments)),
          field("body", optional($.array)),
        ),
      ),

    statement: ($) => choice($.compound, $.logic, $.expression),

    expression: ($) =>
      choice(
        $.literal,
        $.usage,
        $.array,
        $.struct,
        $.parenthesis,
        $.not,
        $.in,
        $.not_in,
        $.compare,
        $.function_call,
        $.function_definition,
      ),

    compound: ($) =>
      seq(
        field("left", $.usage),
        repeat1(choice($.assign, $.concatenate, $.subtract)),
      ),
    assign: ($) => seq("=", field("right", choice($.expression, $.logic))),
    concatenate: ($) => seq("+", field("right", choice($.expression, $.logic))),
    subtract: ($) => seq("-", field("right", choice($.expression, $.logic))),

    logic: ($) =>
      seq(field("left", $.expression), repeat1(choice($.and, $.or))),
    and: ($) => seq("&&", field("right", $.expression)),
    or: ($) => seq("||", field("right", $.expression)),

    not: ($) =>
      prec.right(precedence.not, seq("!", field("right", $.expression))),

    compare: ($) =>
      prec.left(
        precedence.compare,
        seq(
          field("left", $.expression),
          field("operator", choice("==", "!=", ">", "<", ">=", "<=")),
          field("right", $.expression),
        ),
      ),

    in: ($) =>
      prec.left(
        precedence.lookup,
        seq(
          field("left", $.expression),
          field("operator", "in"),
          field("right", $.expression),
        ),
      ),

    not_in: ($) =>
      prec.left(
        precedence.lookup,
        seq(
          field("left", $.expression),
          field("operator", alias(seq("not", "in"), "not in")),
          field("right", $.expression),
        ),
      ),

    literal: ($) => choice($.string, $.number, $.boolean),

    number: ($) => $.decimal,
    boolean: (_) => choice("true", "false"),
  },
});
