a = int(input())
for _ in range(a):
  b = int(input())
  while(True):
    if b - 5 >= 0:
      b -= 5
      print("+" * 4, end = ' ')
    else:
      break
  print("|" * b)