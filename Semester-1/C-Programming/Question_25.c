/* Q.25) Write a program to swap to numbers in a function using
call by reference */

#include <stdio.h>

void Swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Before swapping, A = %d and B = %d", a,b);

    Swap(&a,&b);

    printf("\nAfter Swapping, A = %d and B = %d", a,b);

    return 0;
}