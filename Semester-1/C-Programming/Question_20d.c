/* Q.20.d) Print the following pattern: 

        10
        9 8
        7 6 5
        4 3 2 1

*/

#include <stdio.h>

int main()
{
    int rows, i, j, num=10;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}