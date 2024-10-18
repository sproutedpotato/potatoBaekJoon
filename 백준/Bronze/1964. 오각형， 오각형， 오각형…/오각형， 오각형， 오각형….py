a = int(input())
   
result, line, dest = 5, 3, 1

for _ in range(1, a):
    result += (line * 2) + dest
    line += 1
    dest += 1

print(result % 45678)