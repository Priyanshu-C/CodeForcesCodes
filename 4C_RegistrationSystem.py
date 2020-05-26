a = int(input())
 
x = dict()
 
for i in range(a):
    inp = str(input())
    if inp in x:
        x[inp]=x[inp]+1
        print(inp+str(x[inp]))
    else:
        x[str(inp)]= 0
        print("OK")
 