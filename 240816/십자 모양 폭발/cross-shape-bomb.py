n=int(input())
l=[[int(i) for i in input().split()]
   for _ in range(n)]
r,c=map(int,input().split())
r=r-1
c=c-1

a=l[r][c]
l[r][c]=0
for i in range(a-1):
    if r-1-i>=0:
        l[r-1-i][c]=0
for i in range(a-1):
    if r+1+i<=n-1:
        l[r+1+i][c]=0
for i in range(a-1):
    if c-1-i>=0:
        l[r][c-1-i]=0
for i in range(a-1):
    if c+1+i<=n-1:
        l[r][c+1+i]=0

for j in range(n):
    tl=[]
    for i in range(n-1, -1, -1):
        if l[i][j]!=0:
            tl.append(l[i][j])
    for k in range(len(tl)):
        l[n-1-k][j]=tl[k]
    for k in range(n-len(tl)):
        l[k][j]=0
    
for i in l:
    for j in i:
        print(j, end=' ')
    print()