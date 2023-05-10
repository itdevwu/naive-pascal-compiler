Program test_repeat;

Var c,b: integer;
Begin
  c := 1;
  b := 1;
  a := 2;
  Repeat
    c := c+1;
    b := b*2;
    writeln(700001);
  Until c>=5;
  writeln(b);
End.
