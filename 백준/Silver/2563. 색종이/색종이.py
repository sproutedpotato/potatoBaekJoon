a = int(input())
arr = []
for i in range(100):
  semi_arr = []
  for j in range(100):
    semi_arr.append(0)
  
  arr.append(semi_arr)


for k in range(a):
  x, y = map(int, input().split())
  for i in range(10):
    for j in range(10):
      arr[x + i][y + j] = 1

result = 0

for i in range(100):
  for j in range(100):
    if arr[i][j] == 1:
      result += 1

print(result)