a, b, c = map(int, input().split())
arr = []
arr.append(a)
arr.append(b)
arr.append(c)
arr.sort()
for item in arr:
  print(item, end = ' ')