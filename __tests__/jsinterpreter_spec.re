open Jest;

let () =
  describe(
    "jsinterpreter",
    ExpectJs.(
      () => {

        let basic = "function f(p1, p2) {
  var sum = p1+p2;
  var mul = p1*p2;
  var res = {x: sum, y: mul};
  return res;
};
JSON.stringify(f(1,2));
";

        test("#eval", () =>
          expect(JSInterpreter.eval(basic))
          |> toEqual([%raw {|{x: 3, y: 2}|}])
        );
      }
    ),
  );
