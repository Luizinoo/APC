#include<stdio.h>
#include<string.h>

int main(){

    char palavra[1001], aux;

    scanf("%s", &palavra);

    int i, fim, tam = strlen(palavra);

    fim = tam - 1;
    for(i = 0; i < tam/2; i++){
        aux = palavra[i];
        palavra[i] = palavra[tam-i-1];
        palavra[tam-i-1] = aux;
        fim--;
    }

    printf("%s", palavra);

    return 0;
}