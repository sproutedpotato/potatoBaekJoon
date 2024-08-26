a = int(input())

for _ in range(a):
  sum = 0
  arr = list(map(int, input().split()))

  arr.sort(reverse = True)
  for item in arr:
    if item % 2 == 0:
      sum += item
      min = item
  
  print(f'{sum} {min}')