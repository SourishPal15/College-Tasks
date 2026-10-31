/* Q.3) Write a program to swap two numbers using a third variable */

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Numbers before swapping: %d and %d", a,b);

    c = a;
    a = b;
    b = c;

    printf("\nNumbers after swapping: %d and %d", a,b);

    return 0;
}