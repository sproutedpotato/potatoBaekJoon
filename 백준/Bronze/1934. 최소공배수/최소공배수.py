def getM(a, b):
    k = a * b
    while b != 0:
        r = a % b
        a = b
        b = r
    
    return k // a

a = int(input())
for _ in range(a):
    b, c = map(int, input().split())
    print(getM(b, c))