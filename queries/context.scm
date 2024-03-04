(function_definition
  body: (_) @context.end
) @context

(function_call
  body: (_) @context.end
) @context

(if
  consequence: (_) @context.end
) @context

(assign
  right: (array) @context.end
) @context

(assign
  right: (struct) @context.end
) @context

; (preprocessor_if) @context.start
; (preprocessor_endif) @context.end

(array) @context
(struct) @context
