a = int(input())
for i in range(a):
  arr = list(map(int, input().split()))

  result = max(arr)
  print(f"Case #{i + 1}: {result}")