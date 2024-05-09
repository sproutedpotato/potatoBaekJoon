total = int(input())
input_num = int(input())

sum = 0
for i in range(input_num):
  price, num = map(int, input().split())
  sum += price * num

if (sum == total):
  print("Yes")
else:
  print("No")