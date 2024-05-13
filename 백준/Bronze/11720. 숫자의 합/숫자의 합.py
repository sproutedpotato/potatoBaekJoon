a = int(input())

string = input()
if (len(string) != a):
  print("error input")

letter = list(string)

num = ord('0')
sum = 0
for item in letter:
  sum += ord(item) - num

print(sum)