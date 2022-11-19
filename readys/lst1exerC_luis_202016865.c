#include<stdio.h>

int main(void){

    long long int horas, minutos, segundos;

    scanf("%ld", &horas);

    minutos=horas*60;
    segundos=horas*3600;

    printf("%lld\n", minutos);
    printf("%lld", segundos);

    return 0;
}