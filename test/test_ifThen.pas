Program test_ifThen;

Var a: integer;

Var b: real;

Var c: boolean;
Begin
  a := 1;
  b := 1.5;
  c := true;
  If c Then writeln('c is true');
  If a>b Then writeln('a bigger');
  writeln('end');
End.

{
测试if then 语句
output:
c is true
end
}