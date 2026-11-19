/* Q.23) Write a program to find the factorial of a number using 
function */

#include <stdio.h>

int Factorial(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d = %d", n, Factorial(n));

    return 0;
}