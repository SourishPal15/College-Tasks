/* Q.18) Find the sum of the series 1-2+3-4+5...upto N terms */

#include <stdio.h>

int main()
{
    int n, i, s=0;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            s = s - i;
        else
            s = s + i;
    }

    printf("Sum of the series upto %d terms = %d", n,s);

    return 0;
}