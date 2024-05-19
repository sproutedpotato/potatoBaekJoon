a, b = map(int, input().split())
arr = []
index = 1;
while index < 1000:
  for j in range(index):
    arr.append(index)
  index += 1

sum = 0
for i in range(a - 1, b):
  sum += arr[i]

print(sum)