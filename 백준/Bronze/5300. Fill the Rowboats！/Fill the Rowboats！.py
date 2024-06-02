a = int(input())
for i in range(1, a + 1):
  print(i, end = ' ')
  if i % 6 == 0:
    print("Go!", end = ' ')
  elif i % 6 != 0 and i == a:
    print("Go!") 