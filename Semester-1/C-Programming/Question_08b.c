/* Q.8.a) Write a program to input marks (0-100) and assign grades
accordingly:

    Grade FAIL: 0-29
    Grade C:   30-49
    Grade B:   50-79
    Grade A:   80-89
    Grade A+:  90-100  
    
Solve this program using Switch-Case Statement */

#include <stdio.h>

int main()
{
    int m,i;
    printf("Enter the marks: ");
    scanf("%d", &m);

    i = m / 10;

    switch(i)
    {
        case 0:
        case 1:
        case 2:
            printf("Grade: FAIL");
            break;
        case 3:
        case 4:
            printf("Grade: C");
            break;
        case 5:
        case 6:
        case 7:
            printf("Grade B");
            break;
        case 8:
            printf("Grade A");
            break;
        case 9:
            printf("Grade A+");
        default:
        {
            if(m==100)
                printf("Grade: A+");
            else 
                printf("Invalid Input!");

            break;
        }
    }

    return 0;
}