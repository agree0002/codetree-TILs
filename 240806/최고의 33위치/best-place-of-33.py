n=int(input())
a=[]
maxc=0
for _ in range(n):
    a.append(list(map(int,input().split())))

for i in range(n):
    for j in range(n):
        c=0
        if i+2 >= n or j+2 >= n:
            continue
        for k in range(i,i+3):
            for s in range(j,j+3):
                c+=a[k][s]
        maxc=max(maxc,c)

print(maxc)