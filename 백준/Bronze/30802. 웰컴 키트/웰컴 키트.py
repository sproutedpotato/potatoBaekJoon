person = int(input())
shirt_list = list(map(int, input().split()))
tshirt, pen = map(int, input().split())

sum = 0
for item in shirt_list:
  if item % tshirt == 0:
    sum += item // tshirt
  else:
    sum += item // tshirt + 1

print(sum)
print(f'{person // pen} {person % pen}')