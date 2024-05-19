arr = []
for i in range(5):
  arr.append(list(input()))

for i in range(15):
  for j in range(5):
    if(len(arr[j]) > i):
      print(arr[j][i], end = '')