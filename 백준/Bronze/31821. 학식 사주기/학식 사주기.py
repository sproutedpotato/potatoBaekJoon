a = int(input())
price_arr = []
for _ in range(a):
  price = int(input())
  price_arr.append(price)

b = int(input())
want_arr = []
for _ in range(b):
  want = int(input())
  want_arr.append(want)

total = 0
for item in want_arr:
  total += price_arr[item - 1]

print(total)