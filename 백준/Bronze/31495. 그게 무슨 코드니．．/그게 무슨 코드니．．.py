a = input()

if len(a) == 3:
  print("CE")

elif len(a) >= 3 and a[0] == '"' and a[len(a) - 1] == '"':
  print(a[1:len(a) - 1])
   
else:
  print("CE")