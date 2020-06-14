a,b = map(int,input().split())
f=0
for i in range(a):
    x = input()
    for j in x:
        if j in "CMY":
            print("#Color")
            f=1
            break
    if f==1:
        break
if f==0:
    print("#Black&White")