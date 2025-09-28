a = int(input())

for _ in range(a):
    b = int(input())
    result = 0
    k = list(map(int, input().split()))
    result += sum(k)
    print(result)