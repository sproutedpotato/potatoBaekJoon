first, second = map(int, input().split())
money = int(input())
if(first + second < money * 2):
  print(first + second)
else:
  print(first + second - money * 2)