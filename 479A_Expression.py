a = int(input())
b = int(input())
c = int(input())

x1 = [eval("a*b*c"),eval("a+b+c"),eval("(a+b)*c"),eval("a*(b+c)")]
print(max(x1))