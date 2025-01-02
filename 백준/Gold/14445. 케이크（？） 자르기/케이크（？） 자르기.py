a = int(input())

if a == 1:
  print(0)
elif a == 2:
  print(1)
else:
  if a % 2 == 1:
    print((a + 1) // 2)
  else:
    print(a // 2)