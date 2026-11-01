/* Q.13) Write a program to find the sum and product of all the 
digits of a number */

#include <stdio.h>

int main()
{
    int n, temp, s=0, p=1, d;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp!=0)
    {
        d = temp % 10;
        s = s + d;
        p = p * d;
        temp = temp / 10;
    }

    printf("Sum of digits of %d is = %d", n,s);
    printf("\nProduct of digits of %d is = %d", n,p);

    return 0;
}