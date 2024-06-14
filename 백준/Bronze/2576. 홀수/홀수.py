arr = []
for _ in range(7):
  a = int(input())
  arr.append(a)

arr.sort()
sum = 0
flag = False
for item in arr:
  if item % 2 == 1:
    sum += item
    flag = True

if flag:
  print(sum)
  for item in arr:
    if item % 2 == 1:
      print(item)
      break

else:
  print(-1)