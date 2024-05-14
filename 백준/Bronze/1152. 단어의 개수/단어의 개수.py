string = input().split(' ')

result  = len(string)
if (string[0] == ''):
  result -= 1

if (string[len(string) - 1] == ''):
  result -= 1
print(result)