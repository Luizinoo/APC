#include <stdio.h>

int main (){

    int n, vetor[10000], media, numerador, validador;
    numerador = 0;
    validador = 0;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    for ( int i = 0; i < n; i++) {
        numerador += vetor[i];
    }
    media = numerador / n;
    for ( int i = 0; i < n; i++) {
        if ( vetor[i] > media) {
            validador += 1;
            printf("%d ", vetor[i]);
        }
    }
    if ( validador == 0) {
        printf("0");
    }
    
    return 0;
}