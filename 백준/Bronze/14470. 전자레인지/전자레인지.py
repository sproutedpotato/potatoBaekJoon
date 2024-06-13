a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

sum = 0

if a < 0:
  sum += (0 - a) * c
  a = 0

if a == 0:
  sum += d

sum += (b - a) * e

print(sum)