a, b, c = map(int, input().split())

good, bad = 1, 1

for _ in range(a):
    good += b
    bad += c
    
    if good < bad:
        good, bad = bad, good
    elif good == bad:
        bad -= 1

print(good, bad)