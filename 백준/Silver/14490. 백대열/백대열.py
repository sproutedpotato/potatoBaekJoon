def gcd(a, b):
  while(b != 0):
    r = a % b
    a = b
    b = r
  
  return a

index = input()

a, b = map(int, index.split(":"))

num = gcd(a, b)

print(f"{a // num}:{b // num}")