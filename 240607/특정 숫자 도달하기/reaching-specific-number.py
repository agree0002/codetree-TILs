arr=list(map(int,input().split()))
cnt=0
t=0
for n in arr:
    if n>=250:
        break
    t+=n
    cnt+=1
print(f'{t} {t/cnt:.1f}')