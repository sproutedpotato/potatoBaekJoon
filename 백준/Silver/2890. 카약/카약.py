height, length = map(int, input().split())

maps = []

for _ in range(height):
  maps.append(input())

rank = [0 for _ in range(9)]

count = 1
for i in range(length - 2, 0, -1):
  flag = False
  for j in range(height):
    if maps[j][i] != '.' and rank[int(maps[j][i]) - 1] == 0:
      rank[int(maps[j][i]) - 1] = count
      flag = True
  if flag:
    count += 1

for item in rank:
  print(item)