a = int(input())

for _ in range(a):
  string = list(input())
  total = 0
  result = 0
  for item in string:

    if item == 'O':
      total += 1
    else:
      total = 0

    result += total

  print(result)