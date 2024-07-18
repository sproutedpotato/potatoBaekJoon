a = int(input())
for _ in range(a):
  pos, letter = input().split()
  pos = int(pos)

  print(letter[0:pos - 1], end = '')
  print(letter[pos:])