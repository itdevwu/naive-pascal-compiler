program test_gcd(input,output);
    var x,y:integer;
    

    function gcd(a,b:integer):integer;
        begin
            if b=0 then gcd:=a
            else gcd:=gcd(b, a mod b)
        end;

begin
        readln(x, y);
        writeln(gcd(x, y))
    end.