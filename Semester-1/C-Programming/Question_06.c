/* Q.6) Write a program to input a number and check whether the
number is a Prime number or not */

#include <stdio.h>

int main()
{
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }

    if(c==2)
        printf("%d is a Prime Number", n);
    else
        printf("%d is not a Prime Number", n);

    return 0;
}