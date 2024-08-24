k = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))

sum = 0

a.sort(reverse = False)
b.sort(reverse = True)

for i in range(k):
  sum += a[i] * b[i]

print(sum)