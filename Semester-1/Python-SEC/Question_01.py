''' Q.1) Write a menu driven program to convert the given temperature from Celsius to 
Fahrenheit and vice versa depending upon users' choice '''

print("1. Celsius to Fahrenheit")
print("2. Fahrenheit to Celsius")

choice = int(input("Enter your choice (1 or 2): "))

if choice == 1:
    C = float(input("Enter temperature in Celsius: "))
    F = (C * 9/5) + 32
    print(f"Temperature converted to Fahrenheit: {F:.2f}")

elif choice == 2:
    F = float(input("Enter temperature in Fahrenheit: "))
    C = (F - 32) * 5/9
    print(f"Temperature converted to Celsius: {C:.2f}")

else:
    print("Invalid Choice!")
