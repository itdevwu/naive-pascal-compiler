program test_mergeSort;

const maxn=7;
type arr=array[1..maxn] of integer;
var a,b,c:arr;
i:integer;
procedure merge(r:arr;l,m,n:integer;var r2:arr);
var i,j,k,p:integer;

begin
i:=l;j:=m+1;k:=l-1;
while (i<=m)and (j<=n) do
begin
k:=k+1;
if r[i]<=r[j] then begin r2[k]:=r[i];i:=i+1 end
else begin r2[k]:=r[j];j:=j+1 end
end;
if i<=m then
for p:=i to m do begin k:=k+1;r2[k]:=r[p] end;
if j<=n then
for p:=j to n do begin k:=k+1;r2[k]:=r[p] end;
end;
procedure mergesort( var r,r1:arr;s,t:integer);
var k:integer; c:arr;
begin
if s=t then r1[s]:=r[s] else
begin
k:=(s+t) div 2;
mergesort(r,c,s,k);
mergesort(r,c,k+1,t);
merge(c,s,k,t,r1)
end;
end;
begin
write('Enter data:');
for i:= 1 to maxn do
read(a[i]);
mergesort(a,b,1,maxn);
for i:=1 to maxn do
write(b[i]:9);

end.

{
测试7个整型数据的归并排序
input：3 2 1 9 10 7 7
output:Enter data:        1        2        3        7        7        9       10
}
