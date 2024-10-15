a, b = map(int, input().split())

arr = []

arr = list(map(int, input().split()))

result = 0

for i in range(a):
  for j in range(i + 1, a):
    for k in range(j + 1, a):
      temp = arr[i] + arr[j] + arr[k]
      if temp <= b:
        result = max(result, temp)

print(result)