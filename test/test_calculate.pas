Program test_calculate;

Const conInt = 27;

Const conReal = 2.556;

Var 
  varInt1, varInt2 : integer;
  varReal1, varReal2 , divResult: real;

Begin
  varInt1 := conInt * conInt;
  varInt2 := conInt + conInt;
  varReal1 := conReal * varInt1;
  varReal2 := conReal * varInt2;
  divResult := ((varInt1 + conReal) * conReal) / ((varInt2 / varReal1) -
               varReal2);
  writeln(varInt1);
  writeln(varInt2);
  writeln(varReal1);
  writeln(varReal2);
  writeln(divResult);
End.

{
测试整型与浮点型四则计算
output:
729
54
 1.8630324000000001E+003
 1.3800239999999999E+002
-1.3550171903788929E+001
}
