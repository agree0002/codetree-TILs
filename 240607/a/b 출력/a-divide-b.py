n=input().split()
a=int(n[0])
b=int(n[1])
c=a/b
print(c,end='')
c-=int(c)
l=len(str(c))
for _ in range(22-l):
    print(0, end='')