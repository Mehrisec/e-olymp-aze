var 
  i, max, n: integer; 
  d, c: array[1..15] of integer; // d: günlərin sayı, c: günün qiyməti

procedure recurs(k, s: integer); // Rekursiv funksiya
var 
  f, q, j: integer;
begin
  f := 0; // Əvvəlki günlərin qiymətini saxlayır
  for j := 1 to n do // Hər putyovka üçün
    if d[j] >= k then // Əgər qalan günlər varsa
    begin
      q := (d[j] - k + 1) * c[j]; // Gəliri hesablayır
      f := d[j]; 
      d[j] := 0; // Putyovkanın satıldığını göstərir
      recurs(k + 1, s + q); // Növbəti günə keç
      d[j] := f; // Əvvəlki vəziyyəti bərpa edir
      f := 1;
    end;

  if f = 0 then // Əgər heç bir putyovka satılmayıbsa
    if max < s then max := s; // Maksimal gəliri yeniləyir
end;

begin
  read(n); // Putyovkaların sayını oxuyur
  for i := 1 to n do 
    read(d[i], c[i]); // Qalan günlər və qiymətləri oxuyur
  recurs(1, 0); // Rekursiv funksiya çağırılır
  writeln(max); // Maksimal mənfəəti çap edir
end.
