a = int(input())
b = int(input())

sum = 0
num = 0
for i in range(a , b + 1):
  count = 0
  for j in range(1, i + 1):
    if i % j == 0:
      count += 1
  
  if count == 2:
    if num == 0:
      num = i
    sum += i

if sum != 0:
  print(sum)
  print(num)

else:
  print(-1)