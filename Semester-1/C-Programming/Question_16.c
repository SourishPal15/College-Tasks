/* Q.16) Write a program to convert a decimal number into its binary
equivalent form */

#include <stdio.h>

int main()
{
    int decimal, temp, binary=0, place=1, digit;
    printf("Enter decimal number: ");
    scanf("%d", &decimal);

    temp = decimal;
    while(temp!=0)
    {
        digit = temp % 2;
        binary = binary + (digit * place);
        place = place * 10;
        temp = temp / 2;
    }

    printf("Binary equivalent of %d is = %d", decimal, binary);

    return 0;
}