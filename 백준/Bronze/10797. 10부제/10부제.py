a = int(input())
nums = list(map(int, input().split()))

result = 0
for item in nums:
  if item == a:
    result += 1

print(result)