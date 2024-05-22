a = int(input())

for i in range(a):
  quar, dime, nick, penn = 0, 0, 0, 0
  money = int(input())
  while(money > 0):
    if(money >= 25):
      money -= 25
      quar += 1
    elif(money < 25 and money >= 10):
      money -= 10
      dime += 1
    elif(money < 10 and money >= 5):
      money -= 5
      nick += 1
    else:
      money -= 1
      penn += 1

  print(quar, dime, nick, penn)