import math

a = int(input())
for _ in range(a):
  ip = list(input())
  length = int(math.sqrt(len(ip)))

  for i in range(length - 1, -1, -1):
    for j in range(length):
      print(ip[i + j * length], end = '')
  
  print()