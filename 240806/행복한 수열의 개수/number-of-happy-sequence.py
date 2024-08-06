n,m=map(int,input().split())
a=[]
c=0
for _ in range(n):
    a.append(list(map(int,input().split())))
    
for i in a:
    x=1
    for j in range(1,n):
        if i[j]==i[j-1]:
            x+=1
        else:
            x=1
        if x>=m:
            c+=1
            break

for j in range(n):
    x=1
    for i in range(1,n):
        if a[i][j]==a[i-1][j]:
            x+=1
        else:
            x=1
        if x>=m:
            c+=1
            break
print(c)