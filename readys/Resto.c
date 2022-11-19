#include<stdio.h>

int main(){
    int resto, x1, x2, x3, x4, x5, x6;
    int r1, r2, r3, r4, r5, r6, soma, final, div;
    system("cls");

    scanf("%d", &resto);

    x1=resto%10;
    x2=(resto%100)/10;
    x3=(resto%1000)/100;
    x4=(resto%10000)/1000;
    x5=(resto%100000)/10000;
    x6=resto/100000;

    r1=x1*2;
    r2=x2*3;
    r3=x3*4;
    r4=x4*5;
    r5=x5*6;
    r6=x6*7;

    soma=r1+r2+r3+r4+r5+r6;
    div=soma%11;
    final=11-div;

    printf("%d\n", r1);
    printf("%d\n", r2);
    printf("%d\n", r3);
    printf("%d\n", r4);
    printf("%d\n", r5);
    printf("%d\n", r6);
    printf("%d\n", soma);
    printf("%d\n", div);
    printf("%d", final);

    return 0;
}