array = [[0 for _ in range(100)] for _ in range(100)]

for _ in range(4):
  x1, y1, x2, y2 = map(int, input().split())
  for i in range(x2 - x1):
    for j in range(y2 - y1):
      array[x1 + i][y1 + j] = 1

result = 0
for item in array:
  result += item.count(1)


print(result)