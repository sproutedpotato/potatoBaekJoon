def solution(board, h, w):
    answer = 0
    
    length = len(board)
    
    color = board[h][w]
    target = [[h + 1, w], [h - 1, w], [h, w + 1], [h, w - 1]]
    for item in target:
        if item[0] >= 0 and item[1] >= 0:
            if item[0] < length and item[1] < length:
                if color == board[item[0]][item[1]]:
                    answer += 1

    return answer