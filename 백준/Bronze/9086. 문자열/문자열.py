a = int(input())

for i in range(a):
  string = input()
  letter = list(string)
  print(f"{letter[0]}{letter[len(letter) - 1]}")