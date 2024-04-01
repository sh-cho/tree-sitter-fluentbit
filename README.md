# tree-sitter-fluentbit

[![CI](https://github.com/sh-cho/tree-sitter-fluentbit/actions/workflows/ci.yaml/badge.svg?branch=main)](https://github.com/sh-cho/tree-sitter-fluentbit/actions/workflows/ci.yaml)
[![NPM Version](https://img.shields.io/npm/v/tree-sitter-fluentbit)](https://www.npmjs.com/package/tree-sitter-fluentbit)

[fluent-bit](https://github.com/fluent/fluent-bit/) grammar for tree-sitter

> [!CAUTION]
> Work in progress. It's not ready for use.

## Install
```sh
npm install tree-sitter-fluentbit tree-sitter
```

## Supported format
- [Classic Mode](https://docs.fluentbit.io/manual/administration/configuring-fluent-bit/classic-mode)

## Limitations
> [!NOTE]
> For simple implementation, the following limitations are applied (for now)

- Only 4 space indentation is supported
- Empty line at the end of the file is required

## Contributing
See [CONTRIBUTING.md](./CONTRIBUTING.md)

## License
MIT © [Seonghyeon Cho](https://github.com/sh-cho)
