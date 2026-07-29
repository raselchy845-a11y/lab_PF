/**
Marks	Grade
Less than 51	Fail
51–53	B
54–59	B+
60–69	A-
70–79	A
80–100	A+

**/
#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
     if (m < 0 || m > 100)
    {
        printf("Invalid Marks");
        return 0;
    }
    switch(m/5){
case 20: case 19: case 18: case 17: case 16:
    printf("A+"); break;
case 15: case 14:
    printf("A"); break;
case 13: case 12:
    printf("A-"); break;
case 11: case 10:
   if (m>=51 && m<=53) printf("B");
   else if (m==50) printf("F");

   else  printf("B+");

     break;
default :  printf("Fail");
    }
}
