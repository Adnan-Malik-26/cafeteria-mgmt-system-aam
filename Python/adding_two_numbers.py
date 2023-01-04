height = int(input("Please Enter your height in cm: "))
weight = int(input("Please enter your weight in kg: "))
height_in_m = height/100
bmi = (weight)/(height_in_m*height_in_m)
print("Your BMI is",bmi)
if bmi<18.5:
  print("Your BMI is underweight.")
elif 18.5<bmi<25:
    print("Your Bmi is healthy weight.")
elif 25<bmi<30:
    print("Your BMI is overweight.")
elif bmi>30:
    print("Your BMI is obese.")
else:
    print("Invalid Response")
