sugar = int(input())
bag = 0

while(True):
  if sugar == 0:
    break

  elif sugar < 0:
    bag = -1
    break
  
  if sugar % 5 == 0:
    bag += sugar // 5
    break

  sugar -= 3
  bag += 1

print(bag)