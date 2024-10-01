a = int(input())

r1, r2, r3 = 0, 0, 0

for i in range(1, a + 1):
  r1 += i
  r2 += i
  r3 += i**3

print(r1)
print(r2**2)
print(r3)