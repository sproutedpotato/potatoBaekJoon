string = input()
str_arr = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
num_arr = []
for _ in range(26):
  num_arr.append(0)

string = list(string)
for item in string:
  for j in range(26):
    if item.upper() == str_arr[j]:
      num_arr[j] += 1

isTrue = 0
max = -1
for i in range(26):
  if num_arr[i] > max:
    max = num_arr[i]
    isTrue = 0
    index = i
  elif num_arr[i] == max:
    isTrue += 1

if isTrue > 0:
  print("?")
else:
  print(str_arr[index])