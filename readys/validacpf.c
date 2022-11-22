#include<stdio.h>

int main(void){

    unsigned long long int cpf;
    int cp, d1, d2, d3, d4, d5, d6, d7, d8, d9;
    int n, n1, n2, n3, n4, n5, n6, n7, n8, n9, soma, fin, sub;
    int np, g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11;
    int z2, z3, z4, z5, z6, z7, z8, z9, z10, z11, soma1, fin1, sub1;

    system("cls");

    scanf("%llu", &cpf);

    cp=cpf/100;
    
    d1=cp%10;
    d2=(cp%100)/10;
    d3=(cp%1000)/100;
    d4=(cp%10000)/1000;
    d5=(cp%100000)/10000;
    d6=(cp%1000000)/100000;
    d7=(cp%10000000)/1000000;
    d8=(cp%100000000)/10000000;
    d9=(cp%1000000000)/100000000;

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

    if (fin < 2){
        sub=0;
    }else{
        sub=11-fin;
    }
    
    

    g1=cpf%10;
    g2=(cpf%100)/10;
    g3=(cpf%1000)/100;
    g4=(cpf%10000)/1000;
    g5=(cpf%100000)/10000;
    g6=(cpf%1000000)/100000;
    g7=(cpf%10000000)/1000000;
    g8=(cpf%100000000)/10000000;
    g9=(cpf%1000000000)/100000000;
    g10=(cpf%10000000000)/1000000000;
    g11=(cpf%100000000000)/10000000000;

    z11=g11*11;
    z10=g10*10;
    z9=g9*9;
    z8=g8*8;
    z7=g7*7;
    z6=g6*6;
    z5=g5*5;
    z4=g4*4;
    z3=g3*3;
    z2=g2*2;

    soma1=+z2+z3+z4+z5+z6+z7+z8+z9+z10+z11;
    fin1=soma1%11;

    if (fin1 < 2){
        sub1=0;
    }else{
        sub1=11-fin1;
    }

    if (g2 == sub && g1 == sub1){
        printf("valido");
        return 0;
    }
    else{
        printf("invalido");
        return 0;
    }
}