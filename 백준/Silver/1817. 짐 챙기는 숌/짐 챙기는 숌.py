a, b = map(int, input().split())
result, box = 0, 0
if(a != 0):
  arr = list(map(int, input().split()))

  for i in range(a):
    if(box + arr[i] < b):
      box += arr[i]
    elif box + arr[i] == b:
      box = 0
      result += 1
    elif box + arr[i] > b:
      box = arr[i]
      result += 1
    
  if box != 0:
    result += 1

print(result)