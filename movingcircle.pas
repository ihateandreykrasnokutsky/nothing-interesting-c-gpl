uses GraphABC;
var i:integer;
begin
LockDrawing;//для отсутствия мерцания
for i:=15 to 300 do begin
ClearWindow;//для удаления следа движения окружности
SetPenColor(clGreen);
Circle(i,100,15);
Redraw;//для отсутствия мерцания
Sleep(100);
end;
end.
