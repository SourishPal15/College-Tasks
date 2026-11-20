/* Q.26) Write a program to find the factorial of a positive number using
a recursive function */

#include <stdio.h>

int Factorial(int n)
{
    if(n==0 || n==1)
        return 1;

    return n * Factorial(n-1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Factorial of %d = %d", n,Factorial(n));

    return 0;
}