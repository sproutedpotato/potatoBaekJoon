a, b, c = map(int, input().split())
triangle = [a, b, c]
triangle.sort()

if triangle[0] + triangle[1] > triangle[2]:
  print(triangle[0] + triangle[1] + triangle[2])
else:
  triangle[2] = triangle[0] + triangle[1] - 1
  print(triangle[0] + triangle[1] + triangle[2])