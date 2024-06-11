letter = input()
length = len(letter)
result = 0

ring_num = int(input())

for _ in range(ring_num):
  index, flag = 0, False
  ring = input()
  for i in range(10):
    if(ring[i] == letter[0]):
      flag = True
      index = i

      for j in range(length):
        if index >= 10: index = 0
        
        if ring[index] == letter[j]:
          index += 1
        
        else:
          flag = False
          break

    if flag:
      break
      
  if flag:
    result += 1

print(result)