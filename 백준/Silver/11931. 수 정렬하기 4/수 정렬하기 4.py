import sys

a = int(sys.stdin.readline().strip())

arr = []
for _ in range(a):
  arr.append(int(sys.stdin.readline().strip()))

arr.sort(reverse = True)

for item in arr:
  print(item)