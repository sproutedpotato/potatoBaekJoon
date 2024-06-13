a = int(input())
for _ in range(a):
    arr = input()
    if len(arr) <= 9 and len(arr) >= 6:
        print("yes")
    else:
        print("no")