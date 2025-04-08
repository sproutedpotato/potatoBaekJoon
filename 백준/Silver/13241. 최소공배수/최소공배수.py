a, b = map(int, input().split())

multed = a * b
while(b != 0):
  r = a % b
  a = b
  b = r
  
print((multed) // a)