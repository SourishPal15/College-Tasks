/* Q.12) Write a program to check whether a number is Palindrome 
number or not */

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

    if(rev==n)
        printf("%d is a Palindrome Number",n);
    else
        printf("%d is not a Palindrome Number",n);

    return 0;
}