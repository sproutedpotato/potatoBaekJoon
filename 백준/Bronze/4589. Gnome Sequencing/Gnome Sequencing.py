a = int(input())
print("Gnomes:")
for _ in range(a):
  x, y, z = map(int, input().split())

  if x < y and y < z:
    print("Ordered")
  elif x > y and y > z:
    print("Ordered")
  else:
    print("Unordered")