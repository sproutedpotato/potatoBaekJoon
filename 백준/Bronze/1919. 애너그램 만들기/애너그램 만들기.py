a = input()
b = input()

result = len(a) + len(b)

b = list(b)
for item in a:
  if item in b:
    b.remove(item)
    result -= 2

print(result)