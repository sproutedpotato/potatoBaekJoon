a, b, c = map(int, input().split())
if a + b + c >= 100:
  print("OK")
else:
  if a < b and a < c:
    print("Soongsil")
  elif b < a and b < c:
    print("Korea")
  else:
    print("Hanyang")