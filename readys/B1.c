#include<stdio.h>

int main(void){

    double x, x1, p1, x2, p2;


    system("cls");

    scanf("%lf", &x1);
    scanf("%lf", &x2);
    scanf("%lf", &p1);
    scanf("%lf", &p2);

    system("cls");

    x=((x1*(p1+p2))-(x2*p2))/p1;
    printf("%f", x);

    return 0;
}