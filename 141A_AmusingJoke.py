a = str(input())
b = str(input())
c = str(input())

a = a+b

for i in a:
    if c.find(i) != -1:
        a=a.replace(i,'',1)
        c=c.replace(i,'',1)
if a=="" and c=="":
    print("YES")
else:
    print("NO")