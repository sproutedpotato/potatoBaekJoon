H, M= map(int, input().split())
C = int(input())

x = C // 60
if (x >= 1):
    C -= 60 * (x)
    H += x
    if (H > 23):
        H -= 24
  
if (M + C > 59):
      M = M + C - 60
      H += 1
      if (H > 23):
          H = 0
elif(M + C <= 59):
    M += C    

print(H, M)