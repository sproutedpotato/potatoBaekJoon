a = int(input())

thropy = []
for _ in range(a):
  ip = int(input())
  thropy.append(ip)

height_left = 1
height_right = 1
max = thropy[0]
for i in range(1, a):
  if thropy[i - 1] < thropy[i] and max < thropy[i]:
    height_left += 1
    max = thropy[i]

max = thropy[a - 1]
for i in range(a - 2, -1, -1):
  if thropy[i + 1] < thropy[i] and max < thropy[i]:
    height_right += 1
    max = thropy[i]

print(height_left)
print(height_right)