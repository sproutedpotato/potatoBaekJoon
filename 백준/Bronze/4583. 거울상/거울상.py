while(True):
  a = input()
  if a == '#':
    break

  result = []
  for i in range(len(a) - 1, -1, -1):
    if 'i' == a[i] or 'v' == a[i] or 'o' == a[i] or 'w' == a[i] or 'x' == a[i]:
      result.append(a[i])
    elif a[i] == 'b':
      result.append('d')
    elif a[i] == 'd':
      result.append('b')
    elif a[i] == 'p':
      result.append('q')
    elif a[i] == 'q':
      result.append('p')
    else:
      break

  if len(result) != len(a):
    print("INVALID")
  else:
    for item in result:
      print(item, end = '')
    print()
