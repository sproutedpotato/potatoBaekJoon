result = 0
for i in range(8):
  chess_list = list(input())
  
  if i % 2 == 0:
    for j in range(8):
      if chess_list[j] == 'F' and j % 2 == 0:
        result += 1
  
  else:
    for j in range(8):
      if chess_list[j] == 'F' and j % 2 == 1:
        result += 1

print(result)