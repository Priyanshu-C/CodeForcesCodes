X = input()
if "AB" in X:
    Z=X.replace("AB",'1',1)
    Y=X[::-1].replace("BA",'1',1)
    if "BA" in Z or "AB" in Y:
        print("YES")
    else:
        print("NO")
else:
    print("NO")