a, b = map(int, input().split())

current = 1
index = 0
while(True):
    flag = True
    
    string = str(current)
    if str(b) in string:
        flag = False
    
    if flag:
        index += 1
    
    if index == a:
        break
        
    current += 1

print(current)