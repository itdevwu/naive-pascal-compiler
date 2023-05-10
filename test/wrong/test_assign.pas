Program test_assign;

Const test_int = 27;

Const test_real = 3.1415{;}
#{wrong char}

Var
  varInt1, varInt2 : integer;
  varReal1, varReal2 : real;
  a: array[0..4, 0..4] Of real;


  '
  'adc'
  {
  {} 

Begin
  varInt1 :=
   test_int * test_int;
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
