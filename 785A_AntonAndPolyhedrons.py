a = int(input())
dic = {"Tetrahedron":4,"Cube":6,"Octahedron":8, "Dodecahedron":12,"Icosahedron" :20}
sum=0
for i in range(a):
    x = str(input())
    sum+= dic[str(x)]
print(sum)
    