#include <stdio.h>

int main(){
    int mark;
    scanf("%d",&mark);
    switch(mark/5){
    case 20 :
    case 19 :
    case 18 :
    case 17 :
    case 16 :
    printf("A+");
    break;
    case 15 :
    printf("A");
    break;
    case 14 :
    printf("A-");
    break;
    case 13 :
    printf("B+");
    break;
    case 12 :
    printf("B");
    break;
    case 11 :
    printf("B-");
    break;
    case 10 :
    printf("C");
    break;
    case 9 :
    printf("D");
    break;
    default :
    printf("fail");
    }
    return 0;
}