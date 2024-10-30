a = int(input())

result = 0;
for _ in range(a):
    b = int(input())
    
    if b % 2 != 0:
        result += 1

print(result)