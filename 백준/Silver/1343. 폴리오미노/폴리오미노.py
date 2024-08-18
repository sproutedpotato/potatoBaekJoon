string = input()
result = []

count = 0
length = len(string)

for i in range(length):
  if string[i] != '.':
    count += 1
  
  if string[i] == '.' or i == length - 1:
    if count % 2 != 0:
      count = -1
      break
    else:
      while count > 0:
        if count - 4 >= 0:
          result.append("AAAA")
          count -= 4
        else:
          result.append("BB")
          count -= 2

      if string[i] == '.':
        result.append(".")

if count >= 0:
  for item in result:
    print(item, end = '')

else:
  print(count)