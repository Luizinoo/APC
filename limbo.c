#include<stdio.h>

int main(){

    float p1, p2, p3, t, l1, l2, l3, l4, l5, mp, ml, mf;

    scanf("%f %f %f", &p1, &p2, &p3);
    scanf("%f", &t);
    scanf("%f %f %f %f %f", &l1, &l2, &l3, &l4, &l5);

    mp=(p1+(2*p2)+(3*p3)+(2*t))/8;
    ml=(l1+l2+l3+l4+l5)/10;
    mf=ml+mp;

    printf("%.2f", mf);

    return 0;
}