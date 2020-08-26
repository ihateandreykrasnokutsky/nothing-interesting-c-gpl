program mypoint;
uses
graphabc;
var
  i, j, sum: integer;
begin
  for i:=1 to 100 do
    for j:=1 to 50 do
      setpixel (i, j, clrandom);
end.
