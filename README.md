# tree-sitter-docker

A modern, robust Tree-sitter parser for Dockerfiles and Containerfiles.

## Features

- **Full Dockerfile Instruction Coverage**:
  - `FROM` (flags like `--platform`, image tags, digests, `AS <stage_name>`)
  - `RUN` (exec array and shell forms, flags like `--mount`, `--network`, heredocs)
  - `CMD` & `ENTRYPOINT` (exec array and shell forms)
  - `LABEL` (`key=value` pairs, quoted strings, spaced pairs)
  - `EXPOSE` (ports, protocols `80/tcp`, variable expansions)
  - `ENV` (`key=value` pairs, multiple pairs per line, legacy `key value` format)
  - `ADD` & `COPY` (flags like `--chown`, `--chmod`, `--from`, `--link`, multiple sources, heredocs)
  - `VOLUME` (JSON exec array and space-separated path lists)
  - `USER` (username, UID, group name, GID `user:group`)
  - `WORKDIR` (paths, variable expansions)
  - `ARG` (name, optional `=default_value`)
  - `ONBUILD` (nested instructions)
  - `STOPSIGNAL` (signal name or number)
  - `HEALTHCHECK` (`NONE` or options `--interval`, `--timeout`, `--start-period`, `--retries` + `CMD ...`)
  - `SHELL` (JSON exec array)
  - `MAINTAINER` (author info)
  - `CROSS_BUILD_*` (multi-arch build extensions)
- **BuildKit Heredocs**:
  - Full support for `<<EOF` and `<<-EOF` (stripping tabs) heredoc blocks across `RUN`, `COPY`, and `ADD`.
  - Multiple heredocs per instruction.
- **Parser Directives**:
  - Case-insensitive `# syntax=...`, `# escape=...`, `# check=...` directives at the beginning of the file.
- **Variable Expansions**:
  - `$VAR`, `${VAR}`, `${VAR:-default}`, `${VAR:+alternative}`, and expansions inside double-quoted strings.
- **Line Continuations**:
  - Multi-line commands using `\` followed by newline.
- **Syntax Highlighting**:
  - Comprehensive Tree-sitter queries in `queries/highlights.scm`.

## Development

### Prerequisites

- Node.js (v18+)
- C/C++ compiler (clang or gcc)

### Installation

```bash
npm install
```

### Generating Parser

```bash
npm run generate
```

### Running Tests

```bash
npm test
```

## Language Bindings

### Golang

Install the Go module:
```bash
go get github.com/tree-sitter/tree-sitter-dockerfile
```

Usage in Go:
```go
package main

import (
	"fmt"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_dockerfile "github.com/tree-sitter/tree-sitter-dockerfile/bindings/go"
)

func main() {
	parser := tree_sitter.NewParser()
	defer parser.Close()

	parser.SetLanguage(tree_sitter.NewLanguage(tree_sitter_dockerfile.Language()))

	source := []byte("FROM alpine:3.18\nRUN echo hello\n")
	tree := parser.Parse(source, nil)
	defer tree.Close()

	fmt.Println(tree.RootNode().ToSexp())
}
```

Run Go tests:
```bash
go test -v ./bindings/go/...
```

---

### C

Include the header and link against `libtree-sitter-dockerfile.a` or dynamic library:

```c
#include <stdio.h>
#include "bindings/c/tree-sitter-dockerfile.h"

int main(void) {
    const TSLanguage *lang = tree_sitter_dockerfile();
    printf("Loaded Dockerfile grammar at %p\n", (void*)lang);
    return 0;
}
```

Build the C library and run C tests:
```bash
make
make test-c
```

---

### WebAssembly (Wasm)

Build the `.wasm` file using Tree-sitter CLI:
```bash
npm run build:wasm
```

This outputs `tree-sitter-dockerfile.wasm`. You can run tests in Wasm:
```bash
npm run test:wasm
```

Usage with `web-tree-sitter`:
```javascript
const Parser = require('web-tree-sitter');

async function main() {
  await Parser.init();
  const parser = new Parser();
  const Dockerfile = await Parser.Language.load('tree-sitter-dockerfile.wasm');
  parser.setLanguage(Dockerfile);

  const tree = parser.parse('FROM alpine\nRUN echo hello');
  console.log(tree.rootNode.toString());
}
main();
```

---

## Neovim Setup

Add this repository to your Neovim Tree-sitter configuration:

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.dockerfile = {
  install_info = {
    url = "https://github.com/...", -- path or URL to this repo
    files = {"src/parser.c", "src/scanner.c"},
  },
  filetype = "dockerfile",
}
```

## License

MIT

