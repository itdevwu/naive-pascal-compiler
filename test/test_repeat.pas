Program test_repeat;

Var c,b: integer;
Begin
  c := 1;
  b := 1;
  Repeat
    c := c+1;
    b := b*2;
    writeln(700001);
  Until c>=5;
  writeln(b);
End.

{
测试repeat
output:
700001
700001
700001
700001
16
}