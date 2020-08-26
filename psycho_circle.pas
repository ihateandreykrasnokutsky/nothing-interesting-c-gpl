uses GraphABC;
var i: integer;
begin
  for i:=90 downto 1 do
  begin
  SetPenColor(clRandom);
  Circle(100,100,i);
  end;
end.
