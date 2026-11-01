/* Q.8.a) Write a program to input marks (0-100) and assign grades
accordingly:

    Grade FAIL: 0-29
    Grade C:   30-49
    Grade B:   50-79
    Grade A:   80-89
    Grade A+:  90-100  
    
Solve this program using IF-ELSE_IF-ELSE ladder */

#include <stdio.h>

int main()
{
    int m; 
    printf("Enter the marks: ");
    scanf("%d", &m);

    if(m>=0 && m<30)
        printf("Grade: FAIL");
    else if(m>=30 && m<50)
        printf("Grade C");
    else if(m>=50 && m<80)
        printf("Grade: B");
    else if(m>=80 && m<90)
        printf("Grade: A");
    else if(m>=90 && m<=100)
        printf("Grade: A+");
    else
        printf("Invalid Input!");

    return 0;
}