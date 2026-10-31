/* Q.1) Write a program to take two numbers as inputs from user and find their sum */

#include <stdio.h>

int main()
{
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    sum = a + b;
    printf("Sum is= %d",sum);

    return 0;
}