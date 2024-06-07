a=input().split()
c=a[0]
n=int(a[1])
if c=='A':
    for i in range(1, n+1):
        print(i,end=' ')
elif c=='D':
    for i in range(n, 0, -1):
        print(i,end=' ')