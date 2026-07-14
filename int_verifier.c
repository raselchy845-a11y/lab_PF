#include <stdio.h>

int main(){
    printf("enter number:");
    double x;
    scanf("%f,&x");
    int n=(int)x;
    if (x-n>0) 
    {
        printf("integer");
    }
    else
    {
    printf("not integer");
    } 

    return 0;
}