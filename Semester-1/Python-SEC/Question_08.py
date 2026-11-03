''' Q.8) Write a program to find the sum of the following series for n terms:

        1 - 2/2! + 3/3!.....n/n! '''

def Factorial(number):

    fact=1
    for i in range(1, number+1):
        fact = fact * i

    return fact

n = int(input("Enter the number of terms in the series: "))
s=0.0

if n >= 0:
    for i in range(1, n+1):

        if i % 2 == 0:
            s = s - i/Factorial(i)
        else:
            s = s + i/Factorial(i)

    print(f"Sum of series 1-2/2!+3/3!...for {n} terms = {s:.2f}")

else:
    print("Please enter a postive number!")
