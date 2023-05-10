Program test_assign;

Const test_int = 27;

Const test_real = 3.1415;

Var 
  varInt1, varInt2 : integer;
  varReal1, varReal2 : real;
  a: array[0..4, 0..4] Of real;

Begin
  varInt1 := test_int * test_int;
  varInt2 := 2 * test_int;
  varReal1 := test_real * test_real;
  varReal2 := test_real* varInt2;
  a[1, 2] := varReal1 * varReal2;
  writeln(varInt1);
  writeln(varInt2);
  writeln(varReal1);
  writeln(varReal2);
  writeln(a[1, 2]);
End.

{
测试赋值
output:
729
54
 9.8690222500000004E+000
 1.6964099999999999E+002
 1.6741908035122499E+003	
}
