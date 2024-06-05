a = float(input())
b = float(input())

BMI = a / (b * b)

if(BMI > 25):
    print("Overweight")

elif(BMI > 18.5 and BMI <= 25.0):
    print("Normal weight")
    
else:
    print("Underweight")