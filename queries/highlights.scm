(identifier) @variable.member
; (interpolation (identifier) @variable)
; (array (expression (identifier) @variable.member))
; (array (expression (usage (identifier) @variable.member)))
; (array (expression (interpolation (identifier) @variable.member)))
; (struct (expression (identifier) @variable.member))
; (struct (expression (usage (identifier) @variable.member)))
; (struct (expression (interpolation (identifier) @variable.member)))
; (arguments (expression (identifier) @variable.parameter))
(function_call
  name: (builtin_function "ForEach")
  (arguments (in left: (usage (identifier) @variable.parameter)))
)
(function_call
  body: (array
    (assign left: (usage (identifier) @variable.parameter))
  )
)
(function_definition (arguments (usage (identifier) @variable.parameter)))
; (arguments (expression (interpolation (identifier) @variable.parameter)))
(preprocessor_if (identifier) @function.macro)
(builtin_macros) @function.builtin.macro
(builtin_variable) @constant.builtin
(builtin_function) @function.builtin

(function_call name: (identifier) @function.call)
(function_definition "function" @keyword.function)
(function_definition name: (identifier) @function)

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

[ "and" "or" "in" "not in" "not" ] @keyword.operator

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

(decimal) @number
[ "true" "false" ] @boolean
[ (filename) (string) ] @string
[ (escape_sequence) (interpolation) (placeholder) ] @string.escape

[ "$" "%" "#" "." "^" ] @punctuation.special
[ "[" "]" "(" ")" "{" "}" ] @punctuation.bracket
