a, b = input().split()
list_a = list(a)
list_b = list(b)

new_a = a[2] + a[1] + a[0]
new_b = b[2] + b[1] + b[0]

if (new_a > new_b):
  print(new_a)
else:
  print(new_b)