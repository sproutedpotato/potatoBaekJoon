a = int(input())

first = a - a * 22 // 100;
temp = a - a * 8 // 10;
second = a * 8 // 10 + temp - temp * 22 // 100;
   
print(f"{first} {second}")