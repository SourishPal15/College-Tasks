/* Q.19) Write a program to find the factorial value of an entered number */

#include <stdio.h>

int main()
{
    int n, i, f=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>=0)
    {
        for(i=1;i<=n;i++)
        {
            f = f * i;
        }

        printf("Factorial value of %d is = %d", n,f);
    }
    else
        printf("Enter a positive number!");

    return 0;
}