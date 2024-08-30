a = int(input())

tree = list(map(int, input().split()))

tree.sort(reverse = True)

for i in range(a):
  tree[i] += i

print(max(tree) + 2)