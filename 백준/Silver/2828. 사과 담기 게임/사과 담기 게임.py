length, basket = map(int, input().split())
apple = int(input())

apple_arr = []
for _ in range(apple):
  apple_arr.append(int(input()))

start, end = 1, basket
count = 0
for item in apple_arr:
  while(True):
    if start <= item and end >= item:
      break
    elif start > item:
      start -= 1
      end -= 1
    elif end < item:
      start += 1
      end += 1
    
    count += 1

print(count)