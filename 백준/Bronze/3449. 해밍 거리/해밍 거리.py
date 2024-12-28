a = int(input())

for _ in range(a):
  n1 = input()
  n2 = input()

  count = 0

  for i in range(len(n1)):
    if n1[i] != n2[i]:
      count += 1

  print(f"Hamming distance is {count}.")