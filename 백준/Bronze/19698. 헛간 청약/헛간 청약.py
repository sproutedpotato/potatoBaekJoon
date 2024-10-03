a, b, c, d = map(int, input().split())

k = (b // d) * (c // d)

if k > a:
    print(a)
else:
    print(k)