package tree_sitter_fluentbit_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_fluentbit "github.com/tree-sitter/tree-sitter-fluentbit/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fluentbit.Language())
	if language == nil {
		t.Errorf("Error loading Fluentbit grammar")
	}
}
