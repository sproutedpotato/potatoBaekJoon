a = int(input())

result = [[] for _ in range(a)]
mine_map = []
open_map = []
flag = False
for _ in range(a):
  mine_map.append(list(input()))

for _ in range(a):
  open_map.append(list(input()))

coor = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]

for i in range(a):
  for j in range(a):
    if open_map[i][j] == 'x':
      if mine_map[i][j] == '*':
        flag = True
      
      mine = 0
      for item in coor:
        if i + item[0] >= 0 and j + item[1] >= 0 and i + item[0] <= a - 1 and j + item[1] <= a - 1:
          if mine_map[i + item[0]][j + item[1]] == '*':
            mine += 1
        
      result[i].append(mine)
    
    else:
      result[i].append('.')

for i in range(a):
  for j in range(a):
    if flag and mine_map[i][j] == '*':
      print('*', end = '')
    else:
      print(result[i][j], end = '')
  print()