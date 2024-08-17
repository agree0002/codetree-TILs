import sys
input=sys.stdin.readline

n,m=map(int,input().split())
l=[int(input()) for _ in range(n)]

tl=[]
b=True
while b:
    b=False

    for i in range(1, len(l)):
        if not b:
            tl.append(i-1)
        if l[i-1] == l[i]:
            tl.append(i)
            b=True
            if i==len(l)-1:
                if len(tl) >= m:
                    for j in tl:
                        l[j]=0
        else:
            if len(tl) >= m:
                for j in tl:
                    l[j]=0
            tl=[]

    tl2=[]
    for k in l:
        if k != 0:
            tl2.append(k)
    l=tl2

    if not b:
        break

print(len(l))
for i in l:
    print(i)