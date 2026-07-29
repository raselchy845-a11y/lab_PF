#include <stdio.h>

int main()
{
    int marks;
    char grade;

    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        grade = 'X';      // Invalid
    else if (marks < 51)
        grade = 'F';
    else if (marks >= 51 && marks <= 53)
        grade = 'B';
    else if (marks >= 54 && marks <= 59)
        grade = 'P';      // P = B+
    else if (marks >= 60 && marks <= 69)
        grade = 'M';      // M = A-
    else if (marks >= 70 && marks <= 79)
        grade = 'A';
    else
        grade = '+';      // A+

    switch (grade)
    {
        case '+':
            printf("Grade: A+");
            break;

        case 'A':
            printf("Grade: A");
            break;

        case 'M':
            printf("Grade: A-");
            break;

        case 'P':
            printf("Grade: B+");
            break;

        case 'B':
            printf("Grade: B");
            break;

        case 'F':
            printf("Grade: Fail");
            break;

        case 'X':
            printf("Invalid Marks");
            break;
    }

    return 0;
}
