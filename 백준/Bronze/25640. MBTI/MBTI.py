mbti = input()
a = int(input())

result = 0
for _ in range(a):
    string = input()
    if string == mbti:
        result += 1
        
print(result)