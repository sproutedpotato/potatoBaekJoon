arr = []
a, b = map(int, input().split())

for i in range(a):
  arr.append(i + 1)

for _ in range(b):
  x, y = map(int, input().split())
  arr[x - 1], arr[y - 1] = arr[y - 1], arr[x - 1]

for item in arr:
  print(item, end = ' ')