n = int(input())

min = 1001

for _ in range(n):
    a, b = map(int, input().split())
    
    if a <= b and min > b:
        min = b

if min == 1001:
    print(-1)
else:
    print(min)