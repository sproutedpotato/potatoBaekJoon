while(True):
  name = []
  height = []
  a = int(input())
  if a == 0:
    break
  for _ in range(a):
    in_name, in_height = input().split()
    name.append(in_name)
    height.append(in_height)

  num = max(height)

  for i in range(len(height)):
    if height[i] == num:
      print(name[i], end = ' ')

  print("")