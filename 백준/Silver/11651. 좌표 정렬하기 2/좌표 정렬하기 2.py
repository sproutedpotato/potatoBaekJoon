import sys

a = int(sys.stdin.readline().strip())
coor = []

for _ in range(int(a)):
  coor.append(list(map(int, sys.stdin.readline().strip().split())))

coor.sort(key = lambda x : (x[1], x[0]))

for item in coor:
  print(item[0], item[1])