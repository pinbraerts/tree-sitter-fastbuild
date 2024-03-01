[
 "[" "]"
 "(" ")"
 "{" "}"
] @punctuation.bracket

"If" @keyword.conditional
"ForEach" @keyword.repeat

[ "." "^" ] @punctuation.special

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

(builtin_variable) @constant.builtin

(builtin_function) @function.builtin
(function_call (identifier) @function.call)
(function_definition "function" @keyword.function)
(function_definition (identifier) @function)

(comment) @comment @spell

[
 "undef"
 "if"
 (preprocessor_else)
 (preprocessor_endif)
 (preprocessor_once)
] @keyword.directive
[ "import" "include" ] @keyword.import
"define" @keyword.directive.define
"#" @keyword.punctuation.special

(usage     (identifier) @variable)
(promotion (identifier) @variable)
(arguments (usage (identifier) @variable.parameter))
(arguments (expression (usage (identifier) @variable.parameter)))
(preprocessor_if (identifier) @function.macro)
(builtin_macros) @function.builtin.macro
(array (expression (usage (identifier) @variable)))
(decimal) @number
[ "true" "false" ] @boolean
[ (filename) (string) ] @string
[ (escape_sequence) (interpolation) (placeholder) ] @string.escape
(interpolation "$" @punctuation.special)
(placeholder "%" @punctuation.special)
