a = input()
x = "hello"
j=0
for i in a:
    if(j<=4 and i==x[j] ):
        j+=1
if(j==5):
    print("YES")
else:
    print("NO")