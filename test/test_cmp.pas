Program test_cmp;

Var 
  int1,int2: integer;
  real1,real2: real;
Begin
  int1 := 1000000;
  int2 := 1000001;
  writeln(int1=int2);
  writeln(int1<int2);
  writeln(int1<=int2);
  writeln(int1<=int1);
  writeln(int1>=int2);
  writeln(int2>=int2);
  writeln(int1>int2);

  real1 := 3.1415929999999999;
  real2 := real1-1;
  writeln(real1=real2);
  writeln(real1<real2);
  writeln(real1<=real2);
  writeln(real1<=real1);
  writeln(real1>=real2);
  writeln(real2>=real2);
  writeln(real1>real2);

  writeln(int1=real2);
  writeln(int1<real2);
  writeln(int1<=real2);
  writeln(int1<=real1);
  writeln(int1>=real2);
  writeln(int2>=real2);
  writeln(int1>real2);
End.

{
测试整型和实数的大小比较
output:
FALSE
TRUE
TRUE
TRUE
FALSE
TRUE
FALSE
FALSE
FALSE
FALSE
TRUE
TRUE
TRUE
TRUE
FALSE
FALSE
FALSE
FALSE
TRUE
TRUE
TRUE
}