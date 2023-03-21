Program test_wrint_and_read;

Var 
  intVar: integer;
  realVar: real;
  a: array[-8..8, -4..4] Of real;
Begin
  {test readln}
  readln(intVar, realVar, a[-2, -3]);
  {test writeln}
  writeln(intVar);
  writeln(realVar);
  {test array}
  writeln(a[-2, -3]);
End.


{
	测试功能：测试writeln和readln两个过程，同时测试多维数组的输出情况
	input:1 2.34 3.2834577
	output:1 2.34 3.2834577
}