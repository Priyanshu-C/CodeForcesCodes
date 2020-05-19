a = input()
f=0
if a.__len__()==1 and a.islower():
    print (a.upper())
    f=1
if a.isupper():
    print (a.lower())
    f=1
if f==0:
    if a[0].islower() and a[1:].isupper():
        print(a[0].upper()+a[1:].lower())
    else:
        print(a)