index = 1

while(True):
  puzzle = input()
  if puzzle == '0':
    break
  
  flag = True
  length = len(puzzle)

  if puzzle[0] != '1' or puzzle[length - 1] != '2':
    flag = False

  if puzzle[length - 2] != '4' and puzzle[length - 2] != '6':
    flag = False

  prev = puzzle[0]
  if flag:
    for item in puzzle[1:length - 1]:
      if item == '1' or item == '2':
        flag = False
        break
      
      if prev == '1':
        if item != '5' and item != '4':
          flag = False
          break

      if prev == '3':
        if item != '5' and item != '4':
          flag = False
          break

      if prev == '4':
        if item != '3' and item != '2':
          flag = False
          break
      
      if prev == '5':
        if item != '8':
          flag = False
          break

      if prev == '6':
        if item != '2' and item != '3':
          flag = False
          break

      if prev == '7':
        if item != '8':
          flag = False
          break

      if prev == '8':
        if item != '7' and item != '6':
          flag = False
          break

      prev = item
    
  if flag:
    print(f"{index}. VALID")

  else:
    print(f"{index}. NOT")

  index += 1