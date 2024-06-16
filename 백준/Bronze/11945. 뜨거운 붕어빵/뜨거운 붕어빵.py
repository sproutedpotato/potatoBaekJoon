a, b = map(int, input().split())
arr = []

for i in range(a):
  imsi = input()
  arr.append(imsi)

for item in arr:
  print(item[::-1])