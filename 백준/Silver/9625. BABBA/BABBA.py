a = int(input())

re_a, re_b = 0, 1

if a == 1:
  print(re_a, re_b)

else:
  a -= 1
  while(a > 0):
    a -= 1
    re_a, re_b = re_b, re_a + re_b

  print(re_a, re_b)