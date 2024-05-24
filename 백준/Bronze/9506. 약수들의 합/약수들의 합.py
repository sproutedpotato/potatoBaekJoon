while(True):
  a = int(input())
  arr = []

  sum = 0
  if a == -1:
    break

  for i in range(1, a):
    if a % i == 0:
      arr.append(i)
      sum += i
    
  if sum == a:
    print(f'{a} = ', end = '')
    for i in range(len(arr)):
      if i != len(arr) - 1:
        print(f'{arr[i]} + ', end = '')
      else:
        print(arr[i])
  
  else:
    print(a, "is NOT perfect.")
