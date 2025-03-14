ip = input()

length = len(ip)
result = 10

for i in range(1, length):
    if ip[i] == ip[i - 1]:
        result += 5
    else:
        result += 10

print(result)