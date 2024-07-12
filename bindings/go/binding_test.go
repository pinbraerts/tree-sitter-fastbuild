package tree_sitter_fastbuild_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-fastbuild"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fastbuild.Language())
	if language == nil {
		t.Errorf("Error loading Fastbuild grammar")
	}
}
