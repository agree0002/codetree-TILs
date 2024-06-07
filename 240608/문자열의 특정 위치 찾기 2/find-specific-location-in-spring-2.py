arr = ["apple", "banana", "grape", "blueberry", "orange"]
cnt = 0
c = input()
for i in arr:
    if i[2] == c or i[3] == c:
        print(i)
        cnt += 1
print(cnt)