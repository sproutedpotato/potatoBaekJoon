while(True):
  a = int(input())
  sum = 0
  if (a == 0):
    break
  
  for i in range(a):
    sum += i + 1
  
  print(sum)