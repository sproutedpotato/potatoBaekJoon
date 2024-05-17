string = input()
arr = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
result = 0;
while(True):
  length = len(arr)
  if(string == ''):
    break

  if(string[0:2] in arr):
    string = string[2:]
    result += 1

  elif(string[0:3] in arr):
    string = string[3:]
    result += 1

  else:
    string = string[1:]
    result += 1
    
print(result)