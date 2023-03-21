Program test_funcCall;

Function testFunc1(intVarTem:integer): integer;
Begin
  writeln(intVarTem+2);
End;

Function testFunc2: integer;
Begin
  writeln(3.14);
End;

Procedure testPro1(intVarTem:integer);
Begin
  writeln(intVarTem-1);
End;

Procedure testPro2;
Begin
  writeln(114);
End;

Begin
  testFunc1(2022);
  testFunc2;
  testPro1(2022);
  testPro2;
End.

{
测试函数和过程能否导入参数
output:2023 3.14 2021 114
}