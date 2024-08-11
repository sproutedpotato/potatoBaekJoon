a = int(input())

mine_map = []
result = [[] for _ in range(a)]
nearIndex = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]

for _ in range(a):
  mine_map.append(list(input()))

for i in range(a):
  for j in range(a):
    if mine_map[i][j] != '.':
      result[i].append("*")
    else:
      mine = 0
      for item in nearIndex:
        if item[0] + i >= 0 and item[1] + j >= 0 and item[0] + i <= a - 1 and item[1] + j <= a - 1 and mine_map[i + item[0]][j + item[1]] != '.':
          mine += int(mine_map[i + item[0]][j + item[1]])
      if mine >= 10:
        result[i].append("M")
      else:
        result[i].append(mine)

for i in range(a):
  for j in range(a):
    print(result[i][j], end = '')
  print()