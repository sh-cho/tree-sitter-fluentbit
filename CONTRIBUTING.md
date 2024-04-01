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
