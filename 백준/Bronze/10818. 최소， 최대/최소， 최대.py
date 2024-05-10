def calMax(arr):
  max = int(arr[0])
  for item in arr:
    if (int(item) > max):
      max = int(item)
  
  return max

def calMin(arr):
  min = int(arr[0])
  for item in arr:
    if (int(item) < min):
      min = int(item)
  
  return min

a = int(input())
arr = input().split()
if (len(arr) != a):
  print("error")

print(calMin(arr), calMax(arr))