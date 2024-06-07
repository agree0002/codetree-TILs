n=input().split()
a=int(n[0])
b=int(n[1])
print(int(a/b), end='')
print('.',end='')
for i in range(1, 21):
    if (a/b) * (10**i) % 10 != 0:
        print(int((a/b) * (10**i) % 10), end='')
    else:
        print(0,end='')