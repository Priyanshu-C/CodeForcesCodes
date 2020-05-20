a = int(input())
x=""
for i in range(a):
    if i%2==0:
        x=x+"I hate it "
    else:
        x=x+"I love it "
x= x.replace("it","that")
x=x[:len(x)-5]+"it"
print(x)