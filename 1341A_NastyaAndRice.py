for _ in range(int(input())):
	n,a,b,c,d=map(int,input().split())
	if c+d<(a-b)*n or (a+b)*n<c-d:print("NO")
	else:print("YES")