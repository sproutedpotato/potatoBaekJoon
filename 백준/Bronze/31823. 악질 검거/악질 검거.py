def get_max(num1, num2):
  if(num1 > num2):
    return num1
  else:
    return num2

num, day = map(int, input().split())
checked = []
for i in range(num):
  check_list = input().split()
  checked.append(check_list)

max_arr = []
for i in range(len(checked)):
    total = 0
    current_max = 0
    for j in range(day):
        if checked[i][j] == '.':
            total += 1
            current_max = get_max(current_max, total)
        elif checked[i][j] == '*':
            total = 0

    max_arr.append(current_max)

imsi = []
for item in max_arr:
  if item not in imsi:
    imsi.append(item)

print(len(imsi))
for i in range(len(checked)):
  print(f'{max_arr[i]} {checked[i][day]}')