while(True):
    a = int(input())
    if a == 0:
        break
    
    if a <= 1000000:
        print(a)
    elif 1000000 < a and a <= 5000000:
        print(int(a * 0.9))
    else:
        print(int(a * 0.8))