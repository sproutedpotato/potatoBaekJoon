a, b, c, d = map(int, input().split())

if a + d > c + b:
    print((a + d) - (c + b))
else:
    print((c + b) - (a + d))