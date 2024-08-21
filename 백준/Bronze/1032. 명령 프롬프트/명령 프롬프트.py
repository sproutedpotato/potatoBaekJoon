a = int(input())

arr = []
for _ in range(a):
  arr.append(input())

temp = arr[0]

for i in range(len(temp)):
  flag = True
  for j in range(a):
    if arr[j][i] != temp[i]:
      flag = False

  if flag:
    print(temp[i], end = '')
  else:
    print("?", end = '')