Program test_assign;

Const test_int = 27;

Const test_real = 3.1415;

Var 
  varInt1, varInt2 : integer;
  varReal1, varReal2 : real;
  a: array[-4..4, -4..4] Of real;

Begin
  varInt1 := test_int * test_int;
  varInt2 := 2 * test_int;
  varReal1 := test_real * test_real;
  varReal2 := test_real* varInt2;
  a[-3, -2] := varReal1 * varReal2;
  writeln(varInt1);
  writeln(varInt2);
  writeln(varReal1);
  writeln(varReal2);
  writeln(a[-3, -2]);
End.

{
	测试赋值
	output:
	729 54 9.869 1.696 1.674	
}