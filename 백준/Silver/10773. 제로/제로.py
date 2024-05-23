re_try, sum = 0, 0
a = int(input())
arr = []
while(True):
  if(re_try == a):
      break
  
  num = int(input())
  if(num == 0):
    sum -= arr[len(arr) - 1]
    del arr[len(arr) - 1]
  
  else:
    arr.append(num)
    sum += arr[len(arr) - 1]
  
  re_try += 1

print(sum)