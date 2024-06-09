a = input()
b = input()
c = input()

arr = []

if a[0] not in arr and (a[0] == 'l' or a[0] == 'k' or a[0] == 'p'):
    arr.append(a[0])
if b[0] not in arr and (b[0] == 'l' or b[0] == 'k' or b[0] == 'p'):
    arr.append(b[0])
if c[0] not in arr and (c[0] == 'l' or c[0] == 'k' or c[0] == 'p'):
    arr.append(c[0])

if 'l' in arr and 'k' in arr and 'p' in arr:
    print("GLOBAL")
else:
    print("PONIX")