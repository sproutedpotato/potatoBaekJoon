a = int(input())

for _ in range(a):
  b = int(input())

  count1, count2 = 0, 0

  for _ in range(b):
    p1, p2 = input().split()
    if p1 != p2:
      if p1 == 'R' and p2 == 'S' or p1 == 'S' and p2 == 'P' or p1 == 'P' and p2 == 'R':
        count1 += 1
      else:
        count2 += 1

  if count1 > count2:
    print("Player 1")
  elif count2 > count1:
    print("Player 2")
  else:
    print("TIE")