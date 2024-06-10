a = int(input())
b = int(input())
candy = list(map(int, input().split()))

sum_candy = sum(candy)
if a <= sum_candy:
  print("Padaeng_i Happy")
else:
  print("Padaeng_i Cry")