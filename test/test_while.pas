Program test_while;

Var 
  a: integer;
Begin
  a := 2;
  While  a < 20  Do
    Begin
      writeln(a);
      a := a + 5;
    End;
End.

{
测试while循环
output:
2
7
12
17
}