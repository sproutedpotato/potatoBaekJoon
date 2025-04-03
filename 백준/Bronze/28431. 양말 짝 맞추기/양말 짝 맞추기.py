arr = []
for _ in range(5):
  arr.append(int(input()))

for item in arr:
  count = 0
  for i in range(5):
    if item == arr[i]:
      count += 1

  if count % 2 == 1:
    print(item)
    break