Program test_calculate;

Const conInt = 27;

Const conReal = 3.1415926;

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
2290.2210054000002
169.64600039999999
-13.560062306872524
}