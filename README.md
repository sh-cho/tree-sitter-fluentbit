# tree-sitter-fluentbit

[![CI](https://github.com/sh-cho/tree-sitter-fluentbit/actions/workflows/ci.yaml/badge.svg?branch=main)](https://github.com/sh-cho/tree-sitter-fluentbit/actions/workflows/ci.yaml)
[![Crates.io Version](https://img.shields.io/crates/v/tree-sitter-fluentbit?logo=rust)](https://crates.io/crates/tree-sitter-fluentbit)
[![NPM Version](https://img.shields.io/npm/v/tree-sitter-fluentbit?logo=npm&logoColor=white)](https://www.npmjs.com/package/tree-sitter-fluentbit)
[![PyPI - Version](https://img.shields.io/pypi/v/tree-sitter-fluentbit?logo=pypi&logoColor=white)](https://pypi.org/project/tree-sitter-fluentbit/)

[fluent-bit](https://github.com/fluent/fluent-bit/) grammar for tree-sitter

## Supported format
- [Classic Mode](https://docs.fluentbit.io/manual/administration/configuring-fluent-bit/classic-mode)

## Limitations
> [!NOTE]
> For simple implementation, the following limitations are applied (for now)

- Only 4 space indentation is supported
- ERROR node can be placed somewhere, even in the correct file (related [PR](https://github.com/sh-cho/tree-sitter-fluentbit/pull/20))

## Contributing
See [CONTRIBUTING.md](./CONTRIBUTING.md)

## License
MIT © [Seonghyeon Cho](https://github.com/sh-cho)
