((comment) @injection.content
  (#set! injection.language "comment"))

((comment) @injection.content
  (#lua-match? @injection.content "^///")
  ; (#set! injection.language "markdown"))
  (#set! injection.language "jsdoc"))
  ; (#set! injection.language "comment"))
  ; (#set! injection.language "doxygen"))

; ((comment (document (tag (tag_name "@example") (description) @injection.content)))
  ; (#lua-match? @injection.content "^/[*][*][^*].*[*]/$")
  ; (#set! injection.language "fastbuild"))
  ; (#set! injection.language "doxygen"))
