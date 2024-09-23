l = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())

result = 0

while(True):
    if a <= 0 and b <= 0:
        break
    
    a -= c
    b -= d
    
    result += 1

print(l - result)