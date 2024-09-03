current, destination = map(int, input().split())

n = int(input())

button = []

result = 0
flag = False
min = abs(current - destination)
for _ in range(n):
  btn = int(input())
  if btn == destination:
    result = 1
  button.append(btn)

if result < 1:
  for item in button:
    if min > abs(item - destination):
      min = abs(item - destination)
      flag = True
      
  if flag:
    print(min + 1)
  else:
    print(min)

else:
  print(result)

