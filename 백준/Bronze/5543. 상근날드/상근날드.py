arr = []
cola = []
for _ in range(3):
  a = int(input())
  arr.append(a)

for _ in range(2):
  b = int(input())
  cola.append(b)
arr.sort()
cola.sort()

print(arr[0] + cola[0] - 50)