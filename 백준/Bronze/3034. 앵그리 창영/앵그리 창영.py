import math

n, w, h = map(int, input().split())
max_length = math.hypot(w, h)

for _ in range(n):
    match = int(input())
    if match <= max_length:
        print("DA")
    else:
        print("NE")