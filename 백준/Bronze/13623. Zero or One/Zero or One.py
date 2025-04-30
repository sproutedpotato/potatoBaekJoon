a, b, c = map(int, input().split())

if a == 1:
    if b == 1:
        if c == 1:
            print("*")
        else:
            print("C")
    else:
        if c == 1:
            print("B")
        else:
            print("A")
else:
    if b == 1:
        if c == 1:
            print("A")
        else:
            print("B")
    else:
        if c == 1:
            print("C")
        else:
            print("*")