from sys import stdin

num = int(stdin.readline())
result = 0

for i in range(num):
    result += (int(stdin.readline()) - 1)
print(result + 1)