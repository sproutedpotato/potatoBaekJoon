arr = list(map(int, input().split()))
index = 0

while(True):
  if arr[0] == 1 and arr[1] == 2 and arr[2] == 3 and arr[3] == 4 and arr[4] == 5:
    break

  if arr[index] > arr[index + 1]:
    arr[index], arr[index + 1] = arr[index + 1], arr[index]

    for i in range(5):
      print(arr[i], end = ' ')
    
    print()

  index += 1
  if index >= 4:
    index = 0