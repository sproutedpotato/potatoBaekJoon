a = input()
arr = []
for i in range(26):
  arr.append(-1)

letter = list(a)
out = []
for i in range(len(letter)):
  if (letter[i] not in out):
    out.append(letter[i])
    arr[ord(letter[i]) - ord('a')] = i

for item in arr:
  print(item, end = ' ')