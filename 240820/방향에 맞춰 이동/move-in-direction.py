import sys

input = sys.stdin.readline
x, y = 0, 0
dx, dy = (
    {"W": -1, "S": 0, "N": 0, "E": 1},
    {"W": 0, "S": -1, "N": 1, "E": 0},
)

n = int(input())
for i in range(n):
    a, b = input().split()
    x += dx[a] * int(b)
    y += dy[a] * int(b)

print(x, y)