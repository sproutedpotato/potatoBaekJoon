while(True):
  letter = input()
  if letter == 'end':
    break
  flag = False
  vowel, consonant = 0, 0

  for i in range(len(letter)):
    if letter[i] == 'a' or letter[i] == 'i' or letter[i] == 'o' or letter[i] == 'e' or letter[i] == 'u':
      vowel += 1
      consonant = 0
      flag = True
    else:
      consonant += 1
      vowel = 0
    
    if i > 0 and letter[i] == letter[i - 1] and letter[i] not in 'o' and letter[i] not in 'e':
      flag = False
      break
  
    if vowel >= 3 or consonant >= 3:
      flag = False
      break

  if flag:
    print(f"<{letter}> is acceptable.")
  else:
    print(f"<{letter}> is not acceptable.")