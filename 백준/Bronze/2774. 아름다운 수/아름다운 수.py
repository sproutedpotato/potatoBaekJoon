a = int(input())

for i in range(a):
  arr = []
  ip = list(input())
  
  for item in ip:
    if item not in arr:
      arr.append(item)

  print(len(arr))