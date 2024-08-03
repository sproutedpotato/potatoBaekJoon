a = int(input())
arr = []
for _ in range(a):
  arr.append(int(input()))

arr.sort()
for item in arr:
  print(item)