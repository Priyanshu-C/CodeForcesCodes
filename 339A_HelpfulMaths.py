x = list(input())
x = [i for i in x if i not in '+']
x.sort()
for i in range(0,len(x)-1,1):
    print("{}+".format(x[i]),end="");
print(x[len(x)-1])