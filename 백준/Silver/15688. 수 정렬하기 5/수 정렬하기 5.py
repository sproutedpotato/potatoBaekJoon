import sys

a = int(sys.stdin.readline())

arr = []
for _ in range(a):
  arr.append(int(sys.stdin.readline()))

arr.sort()

for item in arr:
  print(item)