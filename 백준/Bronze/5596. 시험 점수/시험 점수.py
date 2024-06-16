a, b, c, d = map(int, input().split())
sum1 = 0
sum1 += a + b + c + d

w, x, y, z = map(int, input().split())
sum2 = 0
sum2 += w + x + y + z

if sum1 < sum2:
  print(sum2)
else:
  print(sum1)