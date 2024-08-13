a, b = map(int, input().split())
top, left, right, bottom = map(int, input().split())

arr = []

for _ in range(a):
  arr.append(input())

flag = False
rows = left + right + b

for _ in range(top):
  for _ in range(rows):
    if not flag:
      print("#", end = '')
    else:
      print(".", end = '')
    
    flag = not flag
  
  print("")
  if rows % 2 == 0:
    flag = not flag

for i in range(a):
  for _ in range(left):
    if not flag:
      print("#", end = '')
    else:
      print(".", end = '')
    
    flag = not flag

  print(arr[i], end = '')
  if b % 2 != 0:
    flag = not flag
   
  for _ in range(right):
    if not flag:
      print("#", end = '')
    else:
      print(".", end = '')
    
    flag = not flag
  
  print("")
  if rows % 2 == 0:
    flag = not flag
      
for _ in range(bottom):
  for _ in range(rows):
    if not flag:
      print("#", end = '')
    else:
      print(".", end = '')
    
    flag = not flag
  
  print("")
  if rows % 2 == 0:
    flag = not flag