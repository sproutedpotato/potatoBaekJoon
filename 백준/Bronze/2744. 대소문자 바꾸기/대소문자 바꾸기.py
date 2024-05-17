string = list(input())
new_arr = []
for item in string:
  if(ord(item) < 94):
    new_arr.append(item.lower())
  else:
    new_arr.append(item.upper())

for item in new_arr:
  print(item, end = '')