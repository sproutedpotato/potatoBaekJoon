arr = []
for _ in range(9):
  a = int(input())
  arr.append(a)

max = 0
for i in range(len(arr)):
  if (arr[i] > max):
    max = arr[i]
    index = i + 1

print(max)
print(index)