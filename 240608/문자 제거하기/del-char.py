s=input()
while len(s) > 1:
    n=int(input())
    if n >= len(s):
        s = s[:-1]
    else:
        s = s[:n] + s[n+1:]
    print(s)