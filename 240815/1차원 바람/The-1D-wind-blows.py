def left(arr, a, b):
    t=arr[a][b]
    for k in range(b,0,-1):
        arr[a][k]=arr[a][k-1]
    arr[a][0]=t

def right(arr, a, b):
    t=arr[a][0]
    for k in range(0,b):
        arr[a][k]=arr[a][k+1]
    arr[a][b]=t

n,m,q = map(int,input().split())
l=[list(map(int,input().split())) for _ in range(n)]
l2=[]
for _ in range(q):
    r,d=input().split()
    l2.append([int(r),d])

for i in range(q):
    if l2[i][1]=='L':
        b=True
        b2=False
    else:
        b=False
        b2=True

    x=l2[i][0]-1
    if b:
        left(l,x,m-1)
        b=False
    else:
        right(l,x,m-1)
        b=True
        
    for a in range(x-1,-1,-1):
        b3=False
        for a2 in range(m):
            if l[a][a2] == l[a+1][a2]:
                b3=True
        if b3:
            if b:
                left(l,a,m-1)
                b=False
            else:
                right(l,a,m-1)
                b=True
        else:
            break
    
    b=b2
    for a in range(x+1,n):
        b3=False
        for a2 in range(m):
            if l[a][a2] == l[a-1][a2]:
                b3=True
        if b3:
            if b:
                left(l,a,m-1)
                b=False
            else:
                right(l,a,m-1)
                b=True
        else:
            break

for i in l:
    for j in i:
        print(j, end=' ')
    print()