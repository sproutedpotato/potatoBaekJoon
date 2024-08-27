coor = [(-1, 1), (-1, 0), (-1, -1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]
while(True):
  a, b = map(int, input().split())
  if a == 0 and b == 0:
    break
  
  mine_map = []
  for _ in range(a):
    mine_map.append(input())
  
  for i in range(a):
    for j in range(b):
      num = 0
      if mine_map[i][j] == '*':
        print("*", end = '')

      else:
        for item in coor:
          if i + item[0] >= 0 and j + item[1] >= 0 and i + item[0] <= a - 1 and j + item[1] <= b - 1 and mine_map[i + item[0]][j + item[1]] == '*':
            num += 1
        print(num, end = '')

    print() 