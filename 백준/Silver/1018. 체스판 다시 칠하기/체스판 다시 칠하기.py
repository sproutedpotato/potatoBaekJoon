a, b = map(int, input().split()) 

arr = []

for i in range(a):
  arr.append(input())

result = a * b + 1
chess = ["W", "B"]

for i in range(a - 7):
  for j in range(b - 7):
    temp_a = 0
    temp_b = 0
    for k in range(8):
      for l in range(8):
        if(arr[k + i][l + j] != chess[(k + l) % 2]):
          temp_a += 1
        if(arr[k + i][l + j] != chess[(k + l + 1) % 2]):
          temp_b += 1
    
    result = min(result, min(temp_a, temp_b))

print(result)