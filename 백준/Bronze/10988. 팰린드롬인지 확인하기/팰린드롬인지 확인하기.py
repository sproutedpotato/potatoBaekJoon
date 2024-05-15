a = list(input())
length = len(a)

if(length % 2 != 0):
  word_a = a[0:length // 2]
  word_b = a[length // 2 + 1 :]
else:
  word_a = a[0:length // 2]
  word_b = a[length // 2 :]

word_b.reverse()

if(word_a == word_b):
  print(1)
else:
  print(0)