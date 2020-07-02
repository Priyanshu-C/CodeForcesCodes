import math
n = int(input())
l=5
pic = {0:'Sheldon', 1:'Leonard', 2:'Penny', 3:'Rajesh', 4:'Howard' }
if n<=5:   
    print(pic[n-1])
else:
        
    j = 1
    sum = 5
    presum = 5
    while sum < n:
        j=j+1
        l=l*2
        presum=sum
        sum=sum+l
 #  print(presum,j)
    sum = n - presum
    sum = sum / pow(2,j-1)
    print(pic[math.floor(sum)])