a = int(input())
for i in range(a):
  print(" " * (a - 1 - i), end = '')
  print("*" * (i + 1))

for j in range(a - 1):
  print(" " * (j + 1), end = '')
  print("*" * (a - j - 1))
  