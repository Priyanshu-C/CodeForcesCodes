x = input()
x=x.lower()
a = [a for a in x if a not in "YyaeiouAEIOU" ]
ax = ['.'+ax for ax in a]
p=str(ax)
print(p)
for i in ax:
    print(i,end="")