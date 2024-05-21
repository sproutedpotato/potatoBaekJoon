arr = list(input().split())

flag_a = True
flag_b = True
for i in range(len(arr)):
  if(int(arr[i]) != i + 1):
    flag_a = False
  if(int(arr[i]) != 8 - i):
    flag_b = False

if(flag_a):
  print("ascending")
elif(flag_b):
  print("descending")
else:
  print("mixed")