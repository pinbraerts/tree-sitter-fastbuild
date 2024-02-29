(variable) @variable

(string) @string
(filename) @string
[ (escape_sequence) (interpolation) (placeholder) ] @string.escape
(interpolation "$" @punctuation.special)
(placeholder "%" @punctuation.special)
; ("," @punctuation.delimiter)

[
 "[" "]"
 "(" ")"
 "{" "}"
] @punctuation.bracket

"If" @keyword.conditional
"ForEach" @keyword.repeat

[
 "+" "-"
 "=" "!"
 "&&" "||"
 "==" "!="
 ">" "<"
 ">=" "<="
] @operator

[
 "and" "or"
 "in" "not in"
 "not"
] @keyword.operator

(decimal) @number

(builtin_variable) @constant.builtin

(builtin_function) @function.builtin
(function_call) @function.call
(function_definition) @function
(function_call (arguments) @variable.parameter)
(print message: (string) @variable.parameter)
(error message: (string) @variable.parameter)
(using struct: (usage) @variable.parameter)

(user_macros)    @function.macro
(builtin_macros) @function.builtin.macro

[ "true" "false" ] @boolean

(comment) @comment @spell

[
 "#undef"
 "#if" "#else" "#endif"
 "#once"
] @keyword.directive
[ "#import" "#include" ] @keyword.import
"#define" @keyword.directive.define

