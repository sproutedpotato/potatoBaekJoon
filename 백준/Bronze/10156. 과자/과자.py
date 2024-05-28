snack, num, money = map(int, input().split())
sum = snack * num
if (sum > money):
  print(sum - money)
else:
  print(0)