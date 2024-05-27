a = int(input())
for i in range(a):
  print(" " * i, end = '')
  print("*" * (2 * (a - i) - 1))