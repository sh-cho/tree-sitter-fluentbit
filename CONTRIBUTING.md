# CONTRIBUTING

## Dev
### Setup node

Node version should be matched with `package.json` engines field. This project uses [pnpm](https://pnpm.io/) (see `pnpm-lock.yaml`).

ex) Install node and pnpm using [mise](https://github.com/jdx/mise)

```sh
$ mise install
```

### Run docs locally
```sh
$ cd docs/
$ pnpm dlx live-server
```
wasm build should be updated

## Run playground locally
```sh
$ pnpm exec tree-sitter build --wasm
$ pnpm exec tree-sitter playground
```

## Build
```sh
$ pnpm install
$ pnpm exec tree-sitter build --wasm

# update docs assets and versions
```

## Publish Bindings

After update release version, change version in `package.json` and `Cargo.toml`. Also update lockfile with `pnpm install --lockfile-only` and `cargo clean`.

Bindings will be published by [publish workflow](.github/workflows/publish.yaml). To publish manually, follow below.

### Node (npm)
- https://docs.npmjs.com/creating-and-publishing-unscoped-public-packages

```sh
$ npm login
$ npm publish
```
Check before publish with `--dry-run`

### Rust (crates.io)
- https://doc.rust-lang.org/cargo/reference/publishing.html

```sh
$ cargo login
$ cargo publish
```
Check before publish with `--dry-run`

### python
(TODO: use uv)

- https://packaging.python.org/en/latest/tutorials/packaging-projects/

```sh
$ rye sync
$ rye add twine
```
Setup python and install twine (ex. rye)

```sh
$ rye build --sdist --wheel
```
Build python package. Note that this will build wheel only for the current platform.

### go

(TBD)
