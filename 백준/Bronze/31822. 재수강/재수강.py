sub = input()
a = int(input())
sub_arr = []
for _ in range(a):
  new_sub = input()
  sub_arr.append(new_sub)

sub = sub[0:5]
total = 0
for item in sub_arr:
  if item.startswith(sub):
    total += 1

print(total)