n=int(input())
l=[int(input()) for _ in range(n)]

for _ in range(2):
    a,b=map(int,input().split())
    for i in range(a-1,b):
        l[i]=0
    tl=[]
    for i in l:
        if i != 0:
            tl.append(i)
    l=tl
    
print(len(l))
for i in l:
    print(i)