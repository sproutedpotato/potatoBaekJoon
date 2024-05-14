time = 0
string = input()
letter = list(string)

num_arr = [['A', 'B', 'C'], ['D', 'E', 'F'], ['G', 'H', 'I'], ['J', 'K', 'L'], ['M', 'N', 'O'], ['P', 'Q', 'R', 'S'], ['T', 'U', 'V'], ['W', 'X', 'Y', 'Z']]
for i in range(len(letter)):
  for j in range(len(num_arr)):
    if (letter[i] in num_arr[j]):
      time += (j + 2 + 1)

print(time)