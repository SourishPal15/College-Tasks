''' Q.5) Write a program to find Factorial of the number inputted by user '''

number = int(input("Enter a postive integer number: "))

if number >= 0:

    factorial=1
    for i in range(1, number+1):
        factorial = factorial * i

    print(f"Factorial of {number} = {factorial}")

else:
    print("Please enter a positive number!")
