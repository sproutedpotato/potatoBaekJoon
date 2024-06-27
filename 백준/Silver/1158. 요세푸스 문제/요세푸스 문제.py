length, count = map(int, input().split())
arr = [i + 1 for i in range(length)]

print("<", end = '')

index = 0
while len(arr) > 0:
    index = (index + count - 1) % len(arr)
    if len(arr) > 1:
        print(f"{arr.pop(index)}, ", end='')
    else:
        print(f"{arr.pop(index)}", end='')

print(">")