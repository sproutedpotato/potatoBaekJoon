import sys

k = int(sys.stdin.readline())
arr = []
for _ in range(k):
  data = int(sys.stdin.readline())
  arr.append(data)

arr.sort()
for item in arr:
  print(item)