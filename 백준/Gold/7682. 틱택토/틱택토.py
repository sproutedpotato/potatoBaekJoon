while True:
  ip = input()

  if ip == 'end':
      break

  status = 'valid'
  X = False
  O = False
  slot = [[0, 1, 2], [3, 4, 5], [6, 7, 8], [0, 3, 6], [1, 4, 7], [2, 5, 8], [0, 4, 8], [2, 4, 6]]

  x_count = ip.count('X')
  o_count = ip.count('O')

  if x_count < o_count or x_count > o_count + 1:
    status = 'invalid'

  else:
    for i in slot:
      if ip[i[0]] == ip[i[1]] == ip[i[2]]:
        if ip[i[0]] == 'X':
          X = True
        elif ip[i[0]] == 'O':
          O = True

  if X and O:
    status = 'invalid'

  if X and x_count != o_count + 1:
    status = 'invalid'

  if O and x_count != o_count:
    status = 'invalid'

  if not X and not O and '.' in ip:
    status = 'invalid'

  print(status)