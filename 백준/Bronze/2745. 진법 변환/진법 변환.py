arr, num = input().split()
arr = list(arr)

for i in range(len(arr)):
  if ord(arr[i]) >= 65:
    arr[i] = ord(arr[i]) - 55
  else:
    arr[i] = int(arr[i])

sum = 0
index = 0
for i in range(len(arr) - 1, -1, -1):
  sum += arr[i] * int(num) ** index
  index += 1

print(sum)