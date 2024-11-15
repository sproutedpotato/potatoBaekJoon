ch = input()

a = [0] * 26
for item in ch:
  a[ord(item) - ord('A')] += 1

flag = True
if len(ch) % 2 == 0:
  for i in range(26):
    if a[i] % 2 != 0:
      flag = False
      break
  
  if flag:
    for i in range(26):
      if a[i] > 0:
        temp = a[i] // 2
        while(a[i] > temp):
          a[i] -= 1
          print(chr(i + ord('A')), end = '')
   
    for i in range(25, -1, -1):
      if a[i] > 0:
        while(a[i] > 0):
          a[i] -= 1
          print(chr(i + ord('A')), end = '')

else:
  count = 0
  for i in range(26):
    if a[i] % 2 != 0:
      c = chr(i + ord('A'))
      a[i] -= 1
      count += 1
      if count > 1:
        flag = False
        break

  if flag:
    for i in range(26):
      if a[i] > 0:
        temp = a[i] // 2
        while(a[i] > temp):
          a[i] -= 1
          print(chr(i + ord('A')), end = '')

    print(c, end = '')
   
    for i in range(25, -1, -1):
      if a[i] > 0:
        while(a[i] > 0):
          a[i] -= 1
          print(chr(i + ord('A')), end = '')



if(not flag):
  print("I'm Sorry Hansoo\n");
