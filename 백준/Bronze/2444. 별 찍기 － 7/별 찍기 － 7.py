a = int(input())
for i in range(a):
  print(" " * (a - 1 - i) + '*' * (2 * i + 1))

for i in range(a - 1):
  print(" " * (i + 1) + "*" * (2 * (a - 1 - i) - 1))