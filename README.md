# tree-sitter-fastbuild

[FASTBuild](https://github.com/fastbuild/fastbuild) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Usage

It's not published on grammar lists yet

### [NeoVim](https://github.com/neovim/neovim/) (using [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter))

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
vim.treesitter.language.register('fastbuild', 'fastbuild') -- not sure if you need it
```

And then

```
:TSInstall fastbuild
```

### Queries

You need to copy queries to some nvim runtime path directory. I use `nvim-data/lazy/nvim-treesitter/queries/fastbuild`

#### shell

```bash
ln -s /path/to/cloned/tree-sitter-fastbuild/queries /some/nvim/rtp/path/queries/fastbuild
```

#### powershell

```powershell
New-Item -Type SymbolicLink -Path some\nvim\rtp\path\queries\fastbuild -Value path\to\cloned\tree-sitter-fastbuild\queries
```

## Features

- [x] Highlighting
- [x] Locals
- [x] [Context](https://github.com/nvim-treesitter/nvim-treesitter-context)
- [x] Folds
- [x] Indentation
- [ ] [Text Objects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects)

## Links

- [Syntax](https://fastbuild.org/docs/syntaxguide.html)

## Example

![examples/example.bff](pictures/example.png)
