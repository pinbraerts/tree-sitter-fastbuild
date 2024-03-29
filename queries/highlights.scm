(identifier) @variable.member
; (interpolation (identifier) @variable)
(array (expression (identifier) @variable.parameter))
(array (compound (usage (identifier) @variable.parameter)))
; (array (expression (interpolation (identifier) @variable.member)))
(struct (expression (identifier) @variable.parameter))
(struct (compound (usage (identifier) @variable.parameter)))
; (struct (expression (interpolation (identifier) @variable.member)))
; (arguments (expression (identifier) @variable.parameter))
(
 (function_call
  name: (identifier) @_func
  (arguments (in left: (usage (identifier) @variable.parameter))))
 (#eq? @_func "ForEach"))
(function_call
  body: (array
    (compound
	  (usage (identifier) @variable.parameter)
	  (assign (_))
	)
  )
)
(function_definition (arguments (usage (identifier) @variable.parameter)))
; (arguments (expression (interpolation (identifier) @variable.parameter)))
(preprocessor_if (identifier) @function.macro)

(function_call name: (identifier) @function.call)
(function_definition "function" @keyword.function)
(function_definition name: (identifier) @function)

(
 (function_call (identifier) @_func @keyword.conditional)
 (#eq? @_func "If")
)

(
 (function_call (identifier) @_func @keyword.repeat)
 (#eq? @_func "ForEach")
)

(
  (function_call (identifier) @_func @function.builtin)
  (#any-of? @_func "Alias" "Compiler" "Copy" "CopyDir" "CSAssembly" "DLL" "Error" "Exec" "Executable" "Library" "ListDependencies" "ObjectList" "Print" "RemoveDir" "Settings" "Test" "TextFile" "Unity" "Using" "VCXProject" "VSProjectExternal" "VSSolution" "XCodeProject")
)

(
  (identifier) @_id @constant.builtin
  (#any-of? @_id "_CURRENT_BFF_DIR_" "_FASTBUILD_VERSION_STRING_" "_FASTBUILD_VERSION_" "_FASTBUILD_EXE_PATH_" "_WORKING_DIR_")
)

(
  (identifier) @_id @function.builtin.macro
  (#any-of? @_id "__LINUX__" "__OSX__" "__WINDOWS__")
)

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
