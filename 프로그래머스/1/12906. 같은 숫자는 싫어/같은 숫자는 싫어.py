def solution(arr):
    answer = []
    
    answer.append(arr[0])
    count = 0
    for i in range(1, len(arr)):
        if arr[i] != answer[count]:
            answer.append(arr[i])
            count += 1
    
    return answer
