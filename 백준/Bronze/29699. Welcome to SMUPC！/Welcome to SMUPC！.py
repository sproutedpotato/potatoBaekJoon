a = int(input())

letter = "WelcomeToSMUPC"

if(a % 14 == 0):
  print("C")

else:
  print(letter[(a % 14) - 1]);