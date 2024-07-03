arr = []
a = int(input())
for _ in range(a):
  letter = input()
  arr.append(letter)

arr.sort(key=lambda x: (len(x), x))

for item in arr:
    print(item)