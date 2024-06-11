a = int(input())

for i in range(a):
  print("*" * (i + 1), end = '')
  print(" " * 2 * (a - i - 1), end = '')
  print("*" * (i + 1))

for j in range(a - 1):
  print("*" * (a - j - 1), end = '')
  print(" " * 2 * (j + 1), end = '')
  print("*" * (a - j - 1))