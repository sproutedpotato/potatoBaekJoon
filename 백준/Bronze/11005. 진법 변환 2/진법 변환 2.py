sum, num = map(int, input().split())
arr = []
flag = True
while(flag):
  if sum >= num:
    per = sum % num
    sum = sum // num

  else:
    per = sum
    flag = False

  if (per > 9):
    per = chr(per + 55)

  else:
    per = str(per)
  
  arr.append(per)

arr = arr[-1::-1]
for item in arr:
  print(item, end = '')