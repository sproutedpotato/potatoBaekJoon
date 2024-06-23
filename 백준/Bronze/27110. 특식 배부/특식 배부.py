a = int(input())
x, y, z = map(int, input().split())
sum = 0

if x <= a:
  sum += x
else:
  sum += a

if y <= a:
  sum += y
else:
  sum += a

if z <= a:
  sum += z
else:
  sum += a

print(sum)