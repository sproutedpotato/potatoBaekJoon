chess_arr = [1, 1, 2, 2, 2, 8]
myChess = list(input().split())
for i in range(len(myChess)):
  print(chess_arr[i] - int(myChess[i]), end = ' ')