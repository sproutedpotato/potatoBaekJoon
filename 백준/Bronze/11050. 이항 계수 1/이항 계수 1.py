n, k = map(int, input().split())

mother, son = 1, 1
for i in range(k):
  mother *= 1 + i
  son *= n - i

print(son // mother)