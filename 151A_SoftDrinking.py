
n, k, l, c, d, gramm, nl, np = map(int,list(input().split()))
lime = c*d
mili = k*l / nl
salt = gramm/np
count = min(lime,salt,mili)/n
print(int(count))