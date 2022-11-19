#include<stdio.h>

int main(void){

    int conta, sexto, quinto, quarto, terceiro, segundo, primeiro;
    int vsexto, vquinto, vquarto, vterceiro, vsegundo, vprimeiro, fim;
    int digito;

    scanf("%d", &conta);

    sexto=conta%10;
    quinto=(conta%100)/10;
    quarto=(conta%1000)/100;
    terceiro=(conta%10000)/1000;
    segundo=(conta%100000)/10000;
    primeiro=conta/100000;

    vsexto=sexto*2;
    vquinto=quinto*3;
    vquarto=quarto*4;
    vterceiro=terceiro*5;
    vsegundo=segundo*6;
    vprimeiro=primeiro*7;

    digito=(vsexto+vquinto+vquarto+vterceiro+vsegundo+vprimeiro)%11;
    fim=11-digito;

    printf("%d", fim);

    return 0;
}