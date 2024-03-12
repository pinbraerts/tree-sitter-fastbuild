(source_file) @local.scope

(preprocessor_import
  (environment_variable) @local.definition.import)

(preprocessor_include
  (filename) @local.definition.import)

(arguments
  (usage (identifier) @local.definition.parameter))

((function_definition
  name: (identifier) @local.definition.function) @local.scope
  (#set! definition.function.scope "parent"))

((function_call
  name: (identifier) @_func
  arguments: (arguments (in
    left: (usage (identifier) @local.definition.var))))
  (#eq? @_func "ForEach"))

(array) @local.scope
(struct) @local.scope

(compound
  (usage (identifier) @local.definition.var)
  (assign (_))
)

(identifier) @local.reference
