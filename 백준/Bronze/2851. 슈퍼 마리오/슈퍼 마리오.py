mushroom = []
for _ in range(10):
  elem = int(input())
  mushroom.append(elem)

eat = 0
sum, result = 0, 0
for item in mushroom:
  prev = sum
  sum += item
  
  if sum >= 100:
    if(abs(prev - 100) < abs(sum - 100)):
      result = prev
    else:
      result = sum

    print(result)
    break

  eat += 1

if(eat == 10):
  print(sum)