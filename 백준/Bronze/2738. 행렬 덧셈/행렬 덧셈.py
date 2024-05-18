a, b = map(int, input().split())
arr = []
arr2 = []
for i in range(a):
  inp = list(input().split())
  arr.append(inp)

for i in range(a):
  inp = list(input().split())
  arr2.append(inp)

for i in range(a):
  for j in range(b):
    arr[i][j] = int(arr[i][j]) + int(arr2[i][j])

for i in range(a):
  for j in range(b):
    print(arr[i][j], end = ' ')
  print("")