import sys


def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n


input = sys.stdin.readline
n, r, c = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
r -= 1
c -= 1
dx, dy = [0, 0, -1, 1], [-1, 1, 0, 0]
mx = a[r][c]

print(mx, end=" ")
while 1:
    b = True
    for i, j in zip(dx, dy):
        r2, c2 = r + j, c + i
        if in_range(r2, c2) and a[r2][c2] > mx:
            mx = a[r2][c2]
            r, c = r2, c2
            print(mx, end=" ")
            b = False
            break

    if b:
        break