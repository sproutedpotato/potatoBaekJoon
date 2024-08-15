one, zero = 0, 0

letter = input()

if letter[0] == '1':
  one += 1
else:
  zero += 1

for i in range(1, len(letter)):
  if letter[i - 1] != letter[i]:
    if letter[i] == '1' :
      one += 1
    else:
      zero += 1
      
print(min(one, zero))