while(True):
    string = input()
    if string == "0":
        break
    
    length = len(string)
    result = 0
    
    for item in string:
        if item == "0":
            result += 4
        elif item == "1":
            result += 2
        else:
            result += 3
            
    print(result + length + 1)