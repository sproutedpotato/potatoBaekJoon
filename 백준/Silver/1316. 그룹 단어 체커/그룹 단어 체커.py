num = int(input())
result = 0
for _ in range(num):
  letter = list(input())
  compare_arr = []
  isGroup = True
  length = len(letter) - 1
  for j in range(length):
    if(letter[j] != letter[j + 1] and letter[j] in compare_arr):
      isGroup = False
      break
    elif(letter[j] != letter[j + 1] and letter[j] not in compare_arr):
      compare_arr.append(letter[j])

    if(j == length - 1 and letter[j + 1] in compare_arr):
      isGroup = False

  if(isGroup):
    result += 1

print(result)