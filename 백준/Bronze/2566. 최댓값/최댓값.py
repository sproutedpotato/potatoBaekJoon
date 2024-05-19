arr = []
for i in range(9):
  input_arr = list(map(int, input().split()))
  arr.append(input_arr)

splited_arr = []

for item in arr:
  temp = max(item)
  splited_arr.append(temp)

result = max(splited_arr)
col = -1
row = -1
for i in range(9):
  for j in range(9):
    if arr[i][j] == result:
      col = i
      row = j
      break

print(result)
print(f'{col + 1} {row + 1}')