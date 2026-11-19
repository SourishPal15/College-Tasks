/* Q.24) Write a program to find the permutation and combination 
by taking n and r as input and using function */

#include <stdio.h>

int Factorial(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n,r,nPr,nCr;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);

    if(r>n)
        printf("Value or r cannot be more than n");
    else
    {
        nPr = Factorial(n) / Factorial(n-r);
        nCr = Factorial(n) / (Factorial(r) * Factorial(n-r));

        printf("Permutation = %d",nPr);
        printf("\nCombination = %d",nCr);
    }

    return 0;
}