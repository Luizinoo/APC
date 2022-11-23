#include<stdio.h>

int main(void){

    int produto, valor, y1, y2, y3, y4, y5, y6;
    int resto, resto1, resto2, resto3, resto4, resto5;

    system("cls");

    scanf("%d", &produto);
    scanf("%d", &valor);

    system("cls");

    resto=valor-produto;
    y1=resto/500;
    resto1=resto-(500*y1);
    y2=resto1/100;
    resto2=resto1-(100*y2);
    y3=resto2/50;
    resto3=resto2-(50*y3);
    y4=resto3/10;
    resto4=resto3-(10*y4);
    y5=resto4/5;
    resto5=resto4-(5*y5);
    y6=resto5;

    printf("%d\n", y1);
    printf("%d\n", y2);
    printf("%d\n", y3);
    printf("%d\n", y4);
    printf("%d\n", y5);
    printf("%d\n", y6);

    return 0;
}