program if_statement;

var
    x: integer;

begin
    write('Input an integer:');
    readln(x);

    if x > 0 then
    begin
        writeln('You inputed a positive number.');
    end
    if x < 0 then
    {else if x < 0 then}
    
    begin
        writeln('You inputed a negative number.');
    end
    else
    begin
        writeln('You inputed zero.');
    end;
end.
