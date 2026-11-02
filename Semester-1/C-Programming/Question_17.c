/* Q.17) Write a program to convert a binary number to its decimal 
equivalent form */

#include <stdio.h>

int ValidBinary(int x)
{
    int d, isValid = 1;

    while(x!=0)
    {
        d = x % 10;
        if(d != 0 && d != 1)
        {
            isValid = 0;
            break;
        }
        x = x / 10;
    }

    if(isValid==1)
        return 1;
    else
        return 0;
}

int main()
{
    int binary, temp, decimal=0, place=1, digit;
    printf("Enter binary number: ");
    scanf("%d", &binary);

    if(ValidBinary(binary)==1)
    {
        temp = binary;

        while(temp!=0)
        {
            digit = temp % 10;
            decimal = decimal + (digit * place);
            place = place * 2;
            temp = temp / 10;
        }

        printf("Decimal equivalent of %d is = %d", binary, decimal);
    }
    else
        printf("Invalid Binary Number!");

    return 0;
}