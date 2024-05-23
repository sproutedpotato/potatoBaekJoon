while(True):
  num = input()
  index = 0
  if num == '0':
    break;

  for i in range(len(num) // 2):
    if num[i] != num[len(num) - 1 - i]:
      print("no")
      break;
    else:
      index += 1

  if index == len(num) // 2:
    print("yes")
