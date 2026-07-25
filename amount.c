#include<stdio.h>
int main(){

    int am;
    int n1000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
    n1000=n500=n200=n100=n50=n20=n10=n5=n2=n1=0;

    scanf("%d",&am);

    if(am>=1000){
        n1000 = am/1000;
        am = am%1000;
    }
    if(am>=500){
        n500 = am/500;
        am = am%500;
    }
    if(am>=200){
        n200 = am/200;
        am = am%200;
    }
    if(am>=100){
        n100 = am/100;   // ✔ fixed
        am = am%100;
    }
    if(am>=50){
        n50 = am/50;
        am = am%50;
    }
    if(am>=20){
        n20 = am/20;
        am = am%20;
    }
    if(am>=10){
        n10 = am/10;
        am = am%10;
    }
    if(am>=5){
        n5 = am/5;
        am = am%5;
    }
    if(am>=2){
        n2 = am/2;
        am = am%2;
    }

    n1 = am;

    printf("n1000= %d\n",n1000);
    printf("n500= %d\n",n500);
    printf("n200= %d\n",n200);
    printf("n100= %d\n",n100);
    printf("n50= %d\n",n50);
    printf("n20= %d\n",n20);
    printf("n10= %d\n",n10);
    printf("n5= %d\n",n5);
    printf("n2= %d\n",n2);
    printf("n1= %d\n",n1);

    return 0;
}