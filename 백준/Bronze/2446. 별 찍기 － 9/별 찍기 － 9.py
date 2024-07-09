a = int(input())

for i in range(a):
  print(" " * i, end = '')
  print("*" * ((a - i) * 2 - 1))

for j in range(a - 1):
  print(" " * (a - 2 - j), end = '')
  print("*" * (2 * j + 3))