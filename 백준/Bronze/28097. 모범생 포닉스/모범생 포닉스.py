a = int(input())
time = list(map(int, input().split()))

for i in range(a - 1):
  time[i] += 8

result = sum(time)
print(f'{result // 24} {result % 24}')