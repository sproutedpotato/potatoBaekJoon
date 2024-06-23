while(True):
  count = 0
  a = input()
  if a == '#':
    break
  for i in range(len(a)):
    if 'a' == a[i] or 'A' == a[i] or 'e' == a[i] or 'E' == a[i] or 'i' == a[i] or 'I' == a[i] or 'o' == a[i] or 'O' == a[i] or 'u' == a[i] or 'U' == a[i]:
      count += 1

  print(count)