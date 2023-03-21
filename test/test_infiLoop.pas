Program test_infiLoop;

Var b: integer;
Begin
    b := 0;
  While TRUE Do
    writeln(114);
  writeln(b);
End.

{
测试无穷循环
output:
114
114
114
...
}