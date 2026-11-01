/* Q.15) Write a program to take the lower limit and upper limit of a
range and then find all  the armstrong numbers present in that range */

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
    int l, u, i, temp, d, arm = 0, c = 0, check = 0;

    printf("Enter lower and upper limit respectively: ");
    scanf("%d %d", &l, &u);

    if (l > u)
    {
        int swap = l;
        l = u;
        u = swap;
    }

    printf("Armstrong Numbers in range %d to %d: ", l, u);

    for (i = l; i <= u; i++)
    {
        arm = 0;
        c = 0;

        temp = i;
        while (temp != 0)
        {
            c++;
            temp = temp / 10;
        }

        if (c == 0)
        {
            c = 1;
        }

        temp = i;
        while (temp != 0)
        {
            d = temp % 10;
            arm = arm + power(d, c);
            temp = temp / 10;
        }

        if (arm == i)
        {
            printf("%d ", i);
            check++;
        }
    }

    if (check == 0)
        printf("NONE");

    return 0;
}