a, b = map(int, input().split())

month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

date = 0
for i in range(a - 1):
  date += month[i]

date += b

if date % 7 == 1:
  print("MON")
elif date % 7 == 2:
  print("TUE")
elif date % 7 == 3:
  print("WED")
elif date % 7 == 4:
  print("THU")
elif date % 7 == 5:
  print("FRI")
elif date % 7 == 6:
  print("SAT")
else:
  print("SUN")