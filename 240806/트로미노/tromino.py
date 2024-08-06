n,m=map(int,input().split())
a=[]
for _ in range(n):
    a.append(list(map(int,input().split())))

max1=0
for i in range(n):
    for j in range(m-2):
        c=a[i][j]+a[i][j+1]+a[i][j+2]
        max1=max(max1,c)

max2=0
for i in range(n-2):
    for j in range(m):
        c=a[i][j]+a[i+1][j]+a[i+2][j]
        max2=max(max2,c)

max3=0
for i in range(n-1):
    for j in range(m-1):
        c=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]-min(a[i][j],a[i][j+1],a[i+1][j],a[i+1][j+1])
        max3=max(max3,c)
        
print(max(max1,max2,max3))