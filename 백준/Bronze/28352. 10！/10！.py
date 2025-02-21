a = int(input())

result = 1
for i in range(1, a + 1):
    result *= i
    
print(result // (60 * 60 * 24 * 7))