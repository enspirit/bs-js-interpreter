type tJSInterpreter;
[@bs.new] [@bs.module] external createJSInterpreter : string => tJSInterpreter = "js-interpreter";
[@bs.send] external run: tJSInterpreter => bool = "run";
[@bs.get] external value: tJSInterpreter => string = "value";

let eval = js_code => {
  let interpreter = createJSInterpreter(js_code);
  ignore(run(interpreter));
  let result = value(interpreter);
  let parsed = Js.Json.parseExn(result);
  parsed
}
