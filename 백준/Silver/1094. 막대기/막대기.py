stick1 = 64
result = 1
a = int(input())

while(True):
  if(stick1 <= a) :
     break

  if(stick1 > a):
      stick1 /= 2

stick2 = stick1
while(True):
  if(stick1 == a):
         break

  if(stick1 + stick2 > a):
    stick2 /= 2

  else:
    stick1 += stick2
    result += 1

print(result)