a, b = map(int, input().split())

new_a, new_b = a, b
while(True):
  r = new_a % new_b
  if r == 0:
    print(new_b)
    break
  else:
    new_a = new_b
    new_b = r

print(a * b // new_b)