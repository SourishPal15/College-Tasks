/* Q.2) Write a program to input temperature in Celsius and convert it into Fahreheit */

#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);

    F = (C * 9.0/5) + 32;
    printf("Temperature converted to Fahrenheit: %g", F);
    return 0;
}