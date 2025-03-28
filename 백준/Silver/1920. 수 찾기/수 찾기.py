import sys

input = sys.stdin.readline

a = int(input().strip())
arr1 = set(map(int, input().split()))

b = int(input())
arr2 = list(map(int, input().split()))

for item in arr2:
  if item in arr1:
    print(1)
  else:
    print(0)