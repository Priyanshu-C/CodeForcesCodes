n = int(input())
f=1
li = []
for i in range(n):
    x = str(input())
    if "OO" in x and f==1:
        x=x.replace("OO","++",1)
        f=0
    li.append(x)
if f==1:
    print('NO')
else:
    print("YES")
    for i in li:
        print (i)

