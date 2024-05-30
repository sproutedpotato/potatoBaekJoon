a = int(input())
for _ in range(a):
  b, c = map(int, input().split())
  for i in range(c):
    for j in range(b):
      print("X", end = '')
    print("")
  print("")