# tree-sitter-fastbuild

[FASTBuild](https://github.com/fastbuild/fastbuild) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Usage

It's not published on grammar lists yet

### [NeoVim](https://github.com/neovim/neovim/) using [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) via [Lazy.nvim](https://github.com/folke/lazy.nvim)

```lua
{
  "pinbraerts/tree-sitter-fastbuild",
  build = ":TSInstall fastbuild",
  dependencies = {
    "nvim-treesitter/nvim-treesitter",
  },
},
```

<details>

<summary>Without plugin system</summary>

```lua
local parsers = require 'nvim-treesitter.parsers'.get_parser_configs()
vim.filetype.add {
  extension = {
    bff = 'fastbuild',
  },
}
parsers.fastbuild = {
  install_info = {
    url = 'https://github.com/pinbraerts/tree-sitter-fastbuild.git',
    branch = 'main',
    files = {
      'src/parser.c',
      'src/scanner.c',
    },
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = 'fastbuild',
}
```

And then

```
:TSInstall fastbuild
```

You need to copy queries to some nvim runtime path directory

#### shell

```bash
ln -s /path/to/cloned/tree-sitter-fastbuild/queries ~/.config/nvim/after/queries/fastbuild
```

#### powershell

```powershell
New-Item -Type SymbolicLink -Value path\to\cloned\tree-sitter-fastbuild\queries -Path $env:LOCALAPPDATA\nvim\after\queries\fastbuild
```

</details>

## Features

- [x] Highlighting
- [x] Locals
- [x] [Context](https://github.com/nvim-treesitter/nvim-treesitter-context)
- [x] Folds
- [x] Indentation
- [x] [Text Objects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects)

## Links

- [Syntax](https://fastbuild.org/docs/syntaxguide.html)

## Example

![examples/example.bff](pictures/example.png)
