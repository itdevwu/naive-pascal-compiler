program TestVariables;

var
  integerVariable: integer; // 整型变量
  floatVariable: real; // 浮点型变量
  booleanVariable: boolean; // 布尔型变量
  charVariable: char; // 字符型变量

begin
  integerVariable := 10;
  floatVariable := 3.14;
  booleanVariable := true;
  charVariable := 'a';

  writeln('integerVariable = ', integerVariable);
  writeln('floatVariable = ', floatVariable:0:2);
  writeln('booleanVariable = ', booleanVariable);
  writeln('charVariable = ', charVariable);
end.
{
以上测试输出整型变量，浮点型变量，布尔型变量，字符型变量
output:
integerVariable = 10
floatVariable = 3.14
booleanVariable = TRUE
charVariable = a
}