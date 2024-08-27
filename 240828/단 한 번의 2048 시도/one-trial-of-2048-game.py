import sys


def rotate(arr):
    return [list(e) for e in zip(*arr[::-1])]


input = sys.stdin.readline
a = [list(map(int, input().split())) for _ in range(4)]
c = input().strip()

n = 0
if c == "D":
    n = 1
elif c == "R":
    n = 2
elif c == "U":
    n = 3
for _ in range(n):
    a = rotate(a)

for i in range(4):
    a2 = []
    temp = 0
    for j in range(4):
        if a[i][j] == 0:
            pass
        else:
            if a[i][j] == temp:
                a2.pop()
                a2.append(a[i][j] * 2)
                temp = 0
            else:
                a2.append(a[i][j])
                temp = a[i][j]
    a[i] = a2

for i in range(4):
    for j in range(4 - len(a[i])):
        a[i].append(0)

for _ in range(4 - n):
    a = rotate(a)

for i in a:
    for j in i:
        print(j, end=" ")
    print()