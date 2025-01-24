current = 0
while True:
  try:
    a = input()
    current += 1

  except EOFError:
    break

print(current)