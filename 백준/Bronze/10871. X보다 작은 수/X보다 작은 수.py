a, num = map(int, input().split())
arr = input().split()
if (len(arr) != a):
  print("error")

for item in arr:
  if (int(item) < num):
    print(item, end = ' ')