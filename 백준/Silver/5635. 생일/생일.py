a = int(input())

min_index, max_index = 0, 0

arr = []
for _ in range(a):
    imsi = list(input().split())
    imsi[1], imsi[2], imsi[3] = int(imsi[1]), int(imsi[2]), int(imsi[3])
    arr.append(imsi)

for i in range(1, a):
    if arr[i][3] < arr[min_index][3]:
        min_index = i
    elif arr[i][3] == arr[min_index][3]:
        if arr[i][2] < arr[min_index][2]:
            min_index = i
        elif arr[i][2] == arr[min_index][2]:
            if arr[i][1] < arr[min_index][1]:
                min_index = i

    if arr[i][3] > arr[max_index][3]:
        max_index = i
    elif arr[i][3] == arr[max_index][3]:
        if arr[i][2] > arr[max_index][2]:
            max_index = i
        elif arr[i][2] == arr[max_index][2]:
            if arr[i][1] > arr[max_index][1]:
                max_index = i

print(f'{arr[max_index][0]}\n{arr[min_index][0]}')