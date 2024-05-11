arr = []
a, b = map(int, input().split())
if (len(arr) > a):
  print("error")

for i in range(a):
  arr.append(0)

for i in range(b):
  x, y, z = map(int, input().split())
  for j in range(y - x + 1):
    arr[x - 1 + j] = z

for item in arr:
  print(item, end = ' ')