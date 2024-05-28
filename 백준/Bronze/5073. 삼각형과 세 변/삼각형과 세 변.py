while(True):
  a, b, c = map(int, input().split())
  if a == b == c == 0:
    break
  
  if a < b + c and b < a + c and c < a + b:
    if(a == b == c):
      print("Equilateral")
    elif(a == b or b == c or a == c):
      print("Isosceles")
    else:
      print("Scalene")
  else:
    print("Invalid")