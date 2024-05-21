a = int(input())

for _ in range(a):
  floor, room, guest = map(int, input().split())

  room_number = 1
  while(True):
    if (floor >= guest):
      break
    else:
      guest -= floor

    room_number += 1;

  result = guest * 100 + room_number

  print(result)