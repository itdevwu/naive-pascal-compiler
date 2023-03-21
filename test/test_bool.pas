Program test_boolLoop;

Var c,b: integer;
Var bool: boolean;
Begin
  c := 1;
  b := 1;
  bool := FALSE;
  Repeat
    c := c+1;
    b := b*2;
    writeln(1141);
  Until TRUE;
  While bool Do
    writeln(1142);
    bool := FALSE;
  writeln(b);
End.

{
测试以bool值作为循环变量
output：
1141
2
}