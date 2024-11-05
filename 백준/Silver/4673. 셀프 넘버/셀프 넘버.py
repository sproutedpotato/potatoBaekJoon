def d(n):
  result = 0

  if(n < 10):
    result = n + n % 10

  elif(n < 100):
    result = n + n // 10 + n % 10

  elif(n < 1000):
    result = n + n // 100 + n // 10 % 10 + n % 10
   
  else:
    result = n + n // 1000 + n // 100 % 10 + n // 10 % 10 + n % 10

  return result

arr = []

for i in range(10000):
  if d(i + 1) not in arr:
    arr.append(d(i + 1))

for i in range(10000):
  if i + 1 not in arr:
    print(i + 1)