def solution(s):
    answer = True
    
    length = len(s)
    
    if(length != 4 and length != 6):
        answer = False
    else:
        for item in s:
            if(ord(item) < 48 or ord(item) > 57):
                answer = False
                break;
    
    return answer