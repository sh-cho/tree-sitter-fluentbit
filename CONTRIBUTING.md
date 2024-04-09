# CONTRIBUTING

(TBD)

## Dev
### Setup node using [mise](https://github.com/jdx/mise)
```sh
$ mise use node@20
$ npm install
```

### Run docs locally
```sh
$ cd docs/
$ npx live-server
```
wasm build should be updated

## Run playground locally
```sh
$ npm exec tree-sitter build-wasm
$ npm exec tree-sitter playground
```

## Build
```sh
$ npm run build
$ npm exec tree-sitter build-wasm
# update docs assets and versions
```

## Publish

After update release version, change version in `package.json` and `Cargo.toml`. Also update lockfile with `npm i --package-lock-only` and `cargo clean`.

### npm
- https://docs.npmjs.com/creating-and-publishing-unscoped-public-packages

```sh
$ npm login
$ npm publish
```
Check before publish with `--dry-run`

### crates.io
- https://doc.rust-lang.org/cargo/reference/publishing.html

```sh
$ cargo login
$ cargo publish
```
Check before publish with `--dry-run`
