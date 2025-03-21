a, b = map(int, input().split())

if a % 2 == 1:
    if b % 2 == 1:
        print(a * (b // 2) + a // 2)
    else:
        print(a * (b // 2))
else:
    print(a // 2 * b)