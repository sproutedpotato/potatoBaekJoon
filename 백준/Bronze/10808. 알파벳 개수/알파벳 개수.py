letter = list(input())

arr = [0 for _ in range(26)]
for item in letter:
  arr[ord(item) - 97] += 1

for item in arr:
  print(item, end = ' ')