/* Q.11) Write a program to find the reverse of a number */

#include <stdio.h>

int main()
{
    int n, temp, d, rev=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp!=0)
    {
        d = temp % 10;
        rev = (rev * 10) + d;
        temp = temp / 10;
    }

    printf("Original Number: %d\n",n);
    printf("Reversed Number: %d",rev);

    return 0;
}