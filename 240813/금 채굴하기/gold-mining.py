n,m = map(int,input().split())
l=[[0 for i in range(n)] for j in range(n)]
l2=[]
maxCount=0
for _ in range(n):
    l2.append(list(map(int,input().split())))

for i in range(n):
    for j in range(n):
        a=0
        for k in range(j,n):
            l[i][k]=a
            a+=1

        b=1
        for k in range(j-1,-1,-1):
            l[i][k]=b
            b+=1

        for k in range(i+1,n):
            for s in range(n):
                l[k][s] = l[k-1][s] + 1
        
        for k in range(i-1,-1,-1):
            for s in range(n):
                l[k][s] = l[k+1][s] + 1

        for k in range(max(max(l))+1):
            cost=k*k+(k+1)*(k+1)
            count=0
            for x in range(n):
                for y in range(n):
                    if l[x][y] <= k:
                        if l2[x][y] == 1:
                            count+=1
            if count*m - cost >= 0:
                maxCount = max(maxCount, count)

print(maxCount)