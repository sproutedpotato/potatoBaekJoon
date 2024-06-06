letter = list(input())

result = 0
for item in letter:
  if item == 'a' or item == 'e' or item == 'i' or item == 'o' or item == 'u':
    result += 1

print(result)