count = 0
a = int(input())

letter = input()

for i in range(a):
    if letter[i] == 'O':
        count += 1

if count >= a / 2:
    print("Yes")
else:
    print("No")