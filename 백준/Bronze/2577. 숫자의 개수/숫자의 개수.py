a = int(input())
b = int(input())
c = int(input())
num = a * b * c
num = str(num)

arr = [0 for _ in range(10)]

for item in num:
  arr[int(item)] += 1

for item in arr:
  print(item, end = ' ')