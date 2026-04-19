def solution(n):
    answer = 0
    num1 = 1
    num2 = 2
    
    if n == 1:
        answer = 1
        return answer
    
    elif n == 2:
        answer = 2
        return answer
    
    for _ in range(n - 2):
        answer = num1 + num2
        num1 = num2
        num2 = answer
    
    answer = answer % 1000000007
    
    return answer