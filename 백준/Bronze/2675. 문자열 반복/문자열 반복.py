a = int(input())

for _ in range(a):
  num, word = input().split()
  word_split = list(word)
  for i in range(len(word_split)):
    print(word_split[i] * int(num), end = '')
  print("")