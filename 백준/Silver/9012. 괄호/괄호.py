a = int(input())
for i in range(a):
  count = 0
  flag = True
  arr = input()
  for j in range(len(arr)):
    if arr[j] == '(':
      count += 1
    else:
      count -= 1

    if count < 0:
      flag = False
      break

  if (not flag or count != 0):
    print("NO")
  elif (arr[len(arr) - 1] == ')' and count == 0):
    print("YES")