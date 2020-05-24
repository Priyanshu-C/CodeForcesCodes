a = str(input())

x = set()
for i in a:
    if i.isalpha():
        x.add(i)
print (x.__len__())
