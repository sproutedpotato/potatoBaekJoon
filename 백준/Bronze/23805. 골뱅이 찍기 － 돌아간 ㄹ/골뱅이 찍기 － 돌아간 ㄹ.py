def one_print(a):
  for i in range(a):
    print("@", end = '')

def three_print(a):
  for i in range(a * 3):
    print("@", end = '')

def blank_print(a):
  for i in range(a):
    print(" ", end = '')


a = int(input())
for i in range(a):
  three_print(a)
  blank_print(a)
  one_print(a)
  print()

for j in range(a * 3):
  one_print(a)
  blank_print(a)
  one_print(a)
  blank_print(a)
  one_print(a)
  print()

for k in range(a):
  one_print(a)
  blank_print(a)
  three_print(a)
  print()