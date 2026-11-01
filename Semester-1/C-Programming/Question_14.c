/* Q.14) Write a program to check if a number is Armstrong number
or not */

#include <stdio.h>

int power(int base, int exponent)
{
    int result = 1;

    while (exponent != 0)
    {
        result *= base;
        exponent--;
    }

    return result;
}

int main()
{
    int n, temp, d, arm = 0, c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("%d is not an Armstrong Number", n);
        return 0;
    }

    temp = n;

    while (temp != 0)
    {
        c++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        d = temp % 10;
        arm += power(d, c);
        temp /= 10;
    }

    if (arm == n)
        printf("%d is a %d digit Armstrong Number", n,c);
    else
        printf("%d is not an Armstrong Number", n);

    return 0;
}

/* NOTE: Since this code is written in VS Code Editor, there is some
kind of problem in using pow(d,c) from <math.h> otherwise its a better 
solution rather than using a user-defined fuction for finding power */