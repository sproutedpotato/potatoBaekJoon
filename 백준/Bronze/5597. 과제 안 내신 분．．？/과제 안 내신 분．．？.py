def sort(arr):
  for i in range(len(arr) - 1):
    for j in range(i + 1, len(arr)):
      if arr[i] > arr[j]:
        arr[i], arr[j] = arr[j], arr[i]

  return arr

arr = []
for i in range(28):
  arr.append(int(input()))

an_arr = []

for i in range(1, 31):
    an_arr.append(i)

missing_numbers = []

for num in an_arr:
    if num not in arr:
        missing_numbers.append(num)

result = sort(missing_numbers)

for item in result:
  print(item)