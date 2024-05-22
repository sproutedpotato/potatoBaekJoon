a = int(input())

room, result = 1, 1
while(True):
  if(room < a):
    room += 6 * result
    result += 1

  else:
    break

print(result)