a = int(input())

for i in range(a):
  gap = -1
  arr = list(map(int, input().split()))

  b = arr[0]
  arr = arr[1:]

  arr.sort()
  
  for j in range(b - 1, -1, -1):
    if arr[j] - arr[j - 1] > gap:
      gap = arr[j] - arr[j - 1]

  print(f'Class {i + 1}\nMax {max(arr)}, Min {min(arr)}, Largest gap {gap}')