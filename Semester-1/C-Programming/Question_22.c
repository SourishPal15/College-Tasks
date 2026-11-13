/* Q.22) Write a program to input two 2D array matrix and find the 
sum of both the matrix and display it */

#include <stdio.h>

void InputMatrix(int r, int  c, int a[r][c])
{
    int i, j;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void DisplayMatrix(int r, int c, int a[r][c])
{
    int i, j;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}

void AddMatrix(int r, int c, int a[r][c], int b[r][c], int sum[r][c])
{
    int i, j;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    DisplayMatrix(r, c, sum);
}

int main()
{
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], S[r][c];

    printf("Enter %d elements in 1st Matrix: ", r*c);
    InputMatrix(r,c,A);

    printf("Enter %d elements in 2nd Matrix: ", r*c);
    InputMatrix(r,c,B);

    printf("Matrix 1:\n");
    DisplayMatrix(r,c,A);

    printf("Matrix 2:\n");
    DisplayMatrix(r,c,B);

    printf("Sum of 1st and 2nd Matrix:\n");
    AddMatrix(r,c,A,B,S);

    return 0;
}