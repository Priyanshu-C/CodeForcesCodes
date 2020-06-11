n = int(input())

s = "abcdefghijklmnopqrstuvwxyz"

for i in range(n):
    l,a,b = map(int,list(input().split()))
    ns = s[:b]
    while(ns.__len__()<l):
        ns = ns + ns
    ns = ns[:l]
    print(ns)

