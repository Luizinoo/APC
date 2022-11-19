#include<stdio.h>

int main(void){

    system("cls");

    unsigned long long int cpf;
    int cp, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, np;
    int n, n1, n2, n3, n4, n5, n6, n7, n8, n9, soma, fin, sub, sub1;

    scanf("%llu", &cpf);

    cp=cpf/100;
    np=cpf%100;
    
    d1=cp%10;
    d2=(cp%100)/10;
    d3=(cp%1000)/100;
    d4=(cp%10000)/1000;
    d5=(cp%100000)/10000;
    d6=(cp%1000000)/100000;
    d7=(cp%10000000)/1000000;
    d8=(cp%100000000)/10000000;
    d9=(cp%1000000000)/100000000;
    d10=np%10;
    d11=np/10;

    n9=d9*10;
    n8=d8*9;
    n7=d7*8;
    n6=d6*7;
    n5=d5*6;
    n4=d4*5;
    n3=d3*4;
    n2=d2*3;
    n1=d1*2;

    soma=n1+n2+n3+n4+n5+n6+n7+n8+n9;
    fin=soma%11;
    sub=(11-fin)%10;

    d1=cp%10;
    d2=(cp%100)/10;
    d3=(cp%1000)/100;
    d4=(cp%10000)/1000;
    d5=(cp%100000)/10000;
    d6=(cp%1000000)/100000;
    d7=(cp%10000000)/1000000;
    d8=(cp%100000000)/10000000;
    d9=(cp%1000000000)/100000000;

    n9=d9*11;
    n8=d8*10;
    n7=d7*9;
    n6=d6*8;
    n5=d5*7;
    n4=d4*6;
    n3=d3*5;
    n2=d2*4;
    n1=d1*3;
    n=soma*2;

    soma=n1+n2+n3+n4+n5+n6+n7+n8+n9;
    fin=soma%11;
    sub1=(11-fin)%10;

    if (d10 == sub && d11 == sub1){
        printf("valido");
        return 0;
    }
    else{
        printf("invalido");
        return 0;
    }
}