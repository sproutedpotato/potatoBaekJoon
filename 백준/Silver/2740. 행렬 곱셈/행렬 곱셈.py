a, b = map(int, input().split())

arr1 = []

for i in range(a):
  arr1.append(list(map(int, input().split())))

c, d = map(int, input().split())
arr2 = []
for i in range(c):
  arr2.append(list(map(int, input().split())))

result = [[0 for _ in range(d)] for _ in range(a)]

for i in range(a):
  for j in range(d):
    result[i][j] = 0
    for k in range(b):
      result[i][j] += arr1[i][k] * arr2[k][j];


for items in result:
  for item in items:
    print(item, end = " ")
  print()