letter = list(input().split("/"))
if(int(letter[0]) + int(letter[2]) < int(letter[1]) or int(letter[1]) == 0):
  print("hasu")
else:
  print("gosu")