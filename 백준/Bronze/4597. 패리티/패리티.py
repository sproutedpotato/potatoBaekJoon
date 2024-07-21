while(True):
  bit = input()
  if(bit == "#"):
    break

  num = 0
  for i in range(len(bit) - 1):
    if bit[i] == '1':
      num += 1
    print(bit[i], end = '')
  
  if(bit[len(bit) - 1] == 'e'):
    if num % 2 == 0:
      print('0')
    else:
      print('1')
  else:
    if num % 2 == 0:
      print('1')
    else:
      print('0')