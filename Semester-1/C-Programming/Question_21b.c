/* Q.21.a) Write a program to take an 1D array as input and arrange/sort 
it in Descending Order */

#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements in array: ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array in Descending Order: ");

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}