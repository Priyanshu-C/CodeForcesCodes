x=input()
a = input()
c=0
for i in range(0,len(a)-1):
    if a[i]==a[i+1]:
        c=c+1
print(c)
