''' Q.4) Write a program to display the first n terms of Fibonacci Series '''

n = int(input("Enter the number of terms in the series: "))

if n > 0:
    a=0
    b=1

    print("Fibonacci Series:", end=" ")

    for i in range(1, n+1):
        print(a, end=" ")
        c = a + b
        a = b
        b = c

else:
    print("Please enter a number greater than 0!")
