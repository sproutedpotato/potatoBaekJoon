while(True):
  letter = input()
  if letter == '.':
    break

  prev = []
  flag = True

  for item in letter:
    length = len(prev)

    if item == '(' or item == '[':
      prev.append(item)
    
    elif item == ')':
      if len(prev) == 0 or prev[-1] != '(':
        flag = False
        break
      prev.pop()
        
    elif item == ']':
      if len(prev) == 0 or prev[-1] != '[':
        flag = False
        break
      prev.pop()

  if flag and len(prev) == 0:
    print("yes")
  else:
    print("no")