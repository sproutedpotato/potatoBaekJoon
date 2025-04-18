arr = [0] * 100
result, max = 0, -1
max_index = 0
for _ in range(10):
    a = int(input())
    
    result += a
    arr[(a // 10) - 1] += 1


for i in range(100):
    if arr[i] > max:
        max = arr[i]
        max_index = i


print(result//10)
print((max_index + 1) * 10)