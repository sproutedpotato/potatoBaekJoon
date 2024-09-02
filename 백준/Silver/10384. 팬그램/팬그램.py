a = int(input())

for i in range(a):
  result = [0] * 26
  letter = input().strip()

  for item in letter:
    if 'A' <= item <= 'Z':
      index = ord(item) - ord('A')
      result[index] += 1
    elif 'a' <= item <= 'z':
      index = ord(item) - ord('a')
      result[index] += 1

  num = min(result)
  if num == 0:
    print(f"Case {i + 1}: Not a pangram")
  elif num == 1:
    print(f"Case {i + 1}: Pangram!")
  elif num == 2:
    print(f"Case {i + 1}: Double pangram!!")
  else:
    print(f"Case {i + 1}: Triple pangram!!!")