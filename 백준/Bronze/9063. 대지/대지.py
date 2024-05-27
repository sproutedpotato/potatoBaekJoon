num = int(input())
x_arr = []
y_arr = []
for i in range(num):
  x, y = map(int, input().split())
  x_arr.append(x)
  y_arr.append(y)

print((max(x_arr) - min(x_arr)) * (max(y_arr) - min(y_arr)))