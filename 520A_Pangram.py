n = input()
a = str(input())
a = a.lower()

x = set()

for i in a:
    if a.isalpha():
        x.add(i)
if (x.__len__()==26):
    print("YES")
else:
    print("NO")