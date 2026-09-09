package tree_sitter_dockerfile_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_dockerfile "github.com/tree-sitter/tree-sitter-dockerfile/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dockerfile.Language())
	if language == nil {
		t.Errorf("Error loading Dockerfile grammar")
	}
}

func TestParseDockerfile(t *testing.T) {
	parser := tree_sitter.NewParser()
	defer parser.Close()

	language := tree_sitter.NewLanguage(tree_sitter_dockerfile.Language())
	if err := parser.SetLanguage(language); err != nil {
		t.Fatalf("Failed to set language: %v", err)
	}

	source := []byte("FROM alpine:3.18\nRUN echo hello\n")
	tree := parser.Parse(source, nil)
	if tree == nil {
		t.Fatalf("Failed to parse Dockerfile")
	}
	defer tree.Close()

	root := tree.RootNode()
	if root.HasError() {
		t.Errorf("Parsed tree contains syntax errors: %s", root.ToSexp())
	}
	if root.Kind() != "source_file" {
		t.Errorf("Expected root node kind source_file, got %s", root.Kind())
	}
	if root.NamedChildCount() != 2 {
		t.Errorf("Expected 2 instructions, got %d", root.NamedChildCount())
	}
}
