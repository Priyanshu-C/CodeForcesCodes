n = int(input())

for i in range(n):
    s = str(input())
    for j in range(0,len(s),2):
        print(s[j],end="")
    print(s[len(s)-1])