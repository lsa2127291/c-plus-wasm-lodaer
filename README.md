# CPP to WASM Webpack Loader

## Base On cpp-wasm-loader
;CPP to WASM Webpack Loader](https://www.npmjs.com/package/cpp-wasm-loader)

## Installation
Run `npm i c-plus-wasm-loader --save-dev`.

## Extra Feature
import mutiple c modules once to save memory

example:

``` javascprit
import wasmModule from '@/wasm/aModule?embed=../bModule,../cModule
```
This will translate those three modules together to wasmModule and only malloc memory once
