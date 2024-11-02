a, b = map(int, input().split())

result = 0
while(True):
    a -= 2
    b -= 1
    
    if a < 0 or b < 0:
        break
        
    result += 1

print(result)