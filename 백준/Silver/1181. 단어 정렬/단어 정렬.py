import sys

a = int(sys.stdin.readline())

arr = []
for _ in range(a):
  arr.append(sys.stdin.readline())

arr.sort(key = lambda x: (len(x), x))
result = []

for item in arr:
  if item not in result:
    result.append(item)
    print(item, end = '')