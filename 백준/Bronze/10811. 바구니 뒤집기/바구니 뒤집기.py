a ,b = map(int, input().split())

arr = []
for i in range(a):
  arr.append(i + 1)

for i in range(b):
  new_arr= []
  x, y = map(int, input().split())
  for j in range(y - 1, x - 2, -1):
    new_arr.append(arr[j])
  arr[x - 1:y] = new_arr

for item in arr:
  print(item, end = ' ')