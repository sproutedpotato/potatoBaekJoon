H, M = map(int, input().split())

if (M - 45 < 0):
  M = 60 + (M - 45)
  H -= 1
  if (H < 0):
    H = 23
        
else:
  M -= 45

print(H, M)