a = int(input())

arr = []
for _ in range(a):
  arr.append(input())

for item in arr:
  if 'S' in item:
    print(item)
    break