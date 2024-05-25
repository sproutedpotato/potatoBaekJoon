a = int(input())
arr = list(input().split())

result = 0
for i in range(0, a):
  count = 0
  for j in range(1, int(arr[i]) + 1):
    if int(arr[i]) % j == 0:
      count += 1
  
  if count == 2:
    result += 1

print(result)