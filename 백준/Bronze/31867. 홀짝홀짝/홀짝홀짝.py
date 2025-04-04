a = int(input())
b = input()

even, odd = 0, 0
for item in b:
    if int(item) % 2 == 0:
        even += 1
    else:
        odd += 1

if even > odd:
    print(0)
elif odd > even:
    print(1)
else:
    print(-1)