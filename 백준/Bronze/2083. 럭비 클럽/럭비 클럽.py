while(True):
  name, age, weight = input().split()

  if (name == '#' and int(age) == 0 and int(weight) == 0):
    break
  
  if (int(age) < 18 and int(weight) < 80):
    print(f"{name} Junior")
  else:
    print(f"{name} Senior")
