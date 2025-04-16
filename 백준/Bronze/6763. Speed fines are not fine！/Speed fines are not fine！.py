a = int(input())
b = int(input())

i = b - a

if i >= 1 and i <= 20:
    print("You are speeding and your fine is $100.")

elif i >= 21 and i <= 30:
    print("You are speeding and your fine is $270.")

elif i >= 31:
    print("You are speeding and your fine is $500.")

else:
    print("Congratulations, you are within the speed limit!")
