/**BMI Ranges
BMI	Category	Character
Less than 18.5	Underweight	'U'
18.5 – 24.9	Normal Weight	'N'
25.0 – 29.9	Overweight	'O'
30.0 or above	Obese	'B'
**/









#include <stdio.h>

int main()
{
    float bmi;
    char category;

    printf("Enter BMI: ");
    scanf("%f", &bmi);

    if (bmi < 0)
        category = 'X';
    else if (bmi < 18.5)
        category = 'U';
    else if (bmi < 25.0)
        category = 'N';
    else if (bmi < 30.0)
        category = 'O';
    else
        category = 'B';

    switch (category)
    {
    case 'U':
        printf("Underweight");
        break;

    case 'N':
        printf("Normal Weight");
        break;

    case 'O':
        printf("Overweight");
        break;

    case 'B':
        printf("Obese");
        break;

    case 'X':
        printf("Invalid BMI");
        break;

    default:
        printf("Unknown Category");
    }

    return 0;
}
