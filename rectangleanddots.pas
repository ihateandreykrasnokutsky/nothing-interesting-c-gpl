uses GraphABC;
var i, j:integer;
begin
  SetPenColor(clRed);
  Rectangle(100,100,400,400);
  for i:=101 to 398 do
    for j:=101 to 398 do
      SetPixel(i,j,clBlue);
end.
