arr = [0 for _ in range(10)]
num = list((input()))
length = len(num)
for i in range(length):
  count = int(num[i])
  if (count == 6 or count == 9) and arr[6] < arr[9]:
    arr[6] += 1
  elif (count == 6 or count == 9) and arr[6] > arr[9]:
    arr[9] += 1
  else:
    arr[count] += 1

print(max(arr))