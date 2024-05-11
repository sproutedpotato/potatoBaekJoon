arr = []
for i in range(10):
  arr.append(int(input()))

divide = []
for item in arr:
  divide.append(item % 42)

result_arr = []

for item in divide:
  if (item not in result_arr):
    result_arr.append(item)

print(len(result_arr))