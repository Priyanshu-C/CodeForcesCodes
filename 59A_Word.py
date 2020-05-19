a=input()

l=0
h=0

for i in a:
    if i.islower():
        l+=1
    else:
        h+=1
if l==h:
    print(a.lower())
elif l>h:
    print(a.lower())
else:
    print(a.upper())