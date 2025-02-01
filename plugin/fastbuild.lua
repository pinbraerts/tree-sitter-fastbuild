vim.filetype.add({
  extension = {
    bff = "fastbuild",
  },
})

--- @diagnostic disable: inject-field
require("nvim-treesitter.parsers").get_parser_configs().fastbuild = {
  install_info = {
    url = vim.fs.dirname(vim.fs.dirname(debug.getinfo(2, "S").source:sub(2))),
    branch = "main",
    files = {
      "src/parser.c",
      "src/scanner.c",
    },
  },
}
