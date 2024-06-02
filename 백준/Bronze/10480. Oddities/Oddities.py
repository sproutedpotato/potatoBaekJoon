a = int(input())
for _ in range(a):
  b = int(input())
  if abs(b) % 2 == 1:
    print(f"{b} is odd")
  else:
    print(f"{b} is even")