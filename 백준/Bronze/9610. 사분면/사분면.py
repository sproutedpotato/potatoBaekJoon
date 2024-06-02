a = int(input())
arr = []
for _ in range(a):
  coor = list(map(int, input().split()))
  arr.append(coor)

axis, one, two, three, four = 0, 0, 0, 0, 0
for i in range(a):
  if arr[i][0] == 0 or arr[i][1] == 0:
    axis += 1
  elif arr[i][0] > 0 and arr[i][1] > 0:
    one += 1
  elif arr[i][0] < 0 and arr[i][1] > 0:
    two += 1
  elif arr[i][0] < 0 and arr[i][1] < 0:
    three += 1
  else:
    four += 1

print(f"Q1: {one}")
print(f"Q2: {two}")
print(f"Q3: {three}")
print(f"Q4: {four}")
print(f"AXIS: {axis}")