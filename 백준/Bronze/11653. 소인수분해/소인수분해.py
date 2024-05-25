a = int(input())
arr = []

while(a > 1):
  for i in range(2, a + 1):
    if a % i == 0:
      arr.append(i)
      break
  
  a = a // i

for item in arr:
  print(item)