a = int(input())
arr = input().split()
if (len(arr) != a):
  print("error")

num = int(input())
  
result = 0
for item in arr:
  if (int(item) == num):
    result += 1

print(result)