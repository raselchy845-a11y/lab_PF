#include <stdio.h>
int series(int n){

    if(n==1) return -2;
    if(n==2) return -1;
    return series(n-1)+series(n-2);
}
int main() {

    int n;

    scanf("%d", &n);

    printf("%d", series(n));

}
// -2 -1 -3 -4 -7 -11 -18 -29
// type of a fibonacci series
