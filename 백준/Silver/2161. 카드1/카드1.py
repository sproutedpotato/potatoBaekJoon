a = int(input())
card = []
for i in range(a):
  card.append(i + 1)

result = []
index = 0
while(True):
  result.append(card[0])
  del card[0]
  index += 1
  if index == a:
    break

  temp = card[0]
  for i in range(len(card) - 1):
    card[i] = card[i + 1]

  card[len(card) - 1] = temp
  
for item in result:
  print(item, end = ' ')