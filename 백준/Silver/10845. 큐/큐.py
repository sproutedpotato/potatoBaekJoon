import sys

a = int(sys.stdin.readline())

arr = []

for _ in range(a):
  ip = sys.stdin.readline()
  ip = ip[0:-1]
  if ip[0:4] == "push":
    arr.append(ip[5:])

  elif ip[0:5] == "empty":
    if len(arr) == 0:
      print(1)
    else:
      print(0)

  elif ip[0:3] == "pop":
    if len(arr) == 0:
      print(-1)
    else:
      print(arr.pop(0))

  elif ip[0:5] == "front":
    if len(arr) == 0:
      print(-1)
    else:
      print(arr[0])

  elif ip[0:4] == "back":
    if len(arr) == 0:
      print(-1)
    else:
      print(arr[-1])

  else:
    print(len(arr))