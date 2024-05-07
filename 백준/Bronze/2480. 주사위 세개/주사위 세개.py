def max(a, b, c):
  if (a > b and a > c):
      max = a
  elif (b > a and b > c):
    max = b
  else:
    max = c
  return max;

a, b, c = map(int, input().split())
if (a == b and b == c):
    price = 10000 + a * 1000

elif ((a == b and a != c) or (a == c and a != b)):
  price = 1000 + a * 100

elif (b == c and b != a):
  price = 1000 + b * 100

else:
  price = max(a, b, c) * 100;

print(price)