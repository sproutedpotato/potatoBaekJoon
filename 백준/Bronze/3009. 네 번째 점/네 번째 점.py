arr_x = []
arr_y = []
for i in range(3):
  x, y = map(int, input().split())
  arr_x.append(x)
  arr_y.append(y)

if arr_x[0] == arr_x[1]:
  result_x = arr_x[2]
elif arr_x[0] == arr_x[2]:
  result_x = arr_x[1]
else:
  result_x = arr_x[0]

if arr_y[0] == arr_y[1]:
  result_y = arr_y[2]
elif arr_y[0] == arr_y[2]:
  result_y = arr_y[1]
else:
  result_y = arr_y[0]

print(result_x, result_y)