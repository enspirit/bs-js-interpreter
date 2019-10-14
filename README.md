# bs-js-interpreter

[BuckleScript](https://bucklescript.github.io) bindings for [js-interpreter](https://github.com/NeilFraser/JS-Interpreter).

# Usage

```reasonml
JSInterpreter.eval("JSON.stringify(Some JS code to run.)");
```

# Developers section

First and formost, configure your environment with `npm install`.

Specific BuckleScript aliases (`clean`, `build`, `watch`, `test`...) are defined
in the `package.json` file to be used with `npm run [alias]`.
