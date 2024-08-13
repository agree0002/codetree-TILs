n,t=map(int,input().split())
l=[i for i in map(int,input().split())]
l2=[i for i in map(int,input().split())]
l3=[i for i in map(int,input().split())]

for _ in range(t):
    t=l[n-1]
    for i in range(n-1, 0, -1):
        l[i]=l[i-1]
    l[0]=l3[n-1]
    for i in range(n-1,0,-1):
        l3[i]=l3[i-1]
    l3[0]=l2[n-1]
    for i in range(n-1,0,-1):
        l2[i]=l2[i-1]
    l2[0]=t

for i in l:
    print(i, end=' ')
print()
for i in l2:
    print(i, end=' ')
print()
for i in l3:
    print(i, end=' ')