import sys
import math

line = sys.stdin.readline()

a, b, c = map(int, line.split())

k = (c - b) / (a - b)
result = math.ceil(k)

print(result)