a = int(input())

for _ in range(a):
    b, c, d = map(int, input().split())

    print(b * (d - 1) + c)