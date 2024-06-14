arr = []
for i in range(8):
  a = int(input()) 
  arr.append([i + 1, a])
arr.sort(key = lambda x: x[1], reverse = True)
sum = 0
arr = arr[:5]
for item in arr:
  sum += item[1]

arr.sort(key = lambda x: x[0])
print(sum)
for item in arr:
  print(item[0], end = ' ')