a = input()
count_colon, count_underbar = 0, 0

for i in range(len(a)):
  if a[i] == ':':
    count_colon += 1
  elif a[i] == '_':
    count_underbar += 1


print(len(a) + count_colon + count_underbar * 5)