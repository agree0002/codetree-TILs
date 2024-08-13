n,t=map(int,input().split())
l=[]
for _ in range(2):
    for i in map(int,input().split()):
        l.append(i)

for _ in range(t):
    t=l[2*n-1]
    for i in range(2*n-1, 0, -1):
        l[i] = l[i-1]
    l[0] = t

for i in l[:n]:
    print(i, end=' ')
print()
for i in l[n:]:
    print(i, end=' ')