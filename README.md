# Qt WebAssembly Hello World

A minimal Qt Widgets application compiled to WebAssembly and deployed to GitHub Pages.

## Deployment

1. Push this repository to GitHub with `main` as the default branch.
2. In **Settings → Pages**, set **Source** to **GitHub Actions**.
3. Push to `main`, or run **Build and deploy Qt WASM** from the Actions tab.

Pull requests run the same build without deploying. The workflow uses Qt 6.8.3 with
Emscripten 3.1.56, the toolchain version required by Qt 6.8 binary packages.

## Local WASM build

Install Qt 6.8.3 for `wasm_singlethread` and activate Emscripten 3.1.56, then run:

```sh
qt-cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel
```

Serve the build directory over HTTP; browsers do not reliably load WASM applications
directly from `file://` URLs. Qt provides `qtwasmserver` for this purpose.
