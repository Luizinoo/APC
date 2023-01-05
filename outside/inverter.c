#include<stdio.h>
#include<string.h>

void inverter(char vet[]){
    int i, aux, fim, tam = strlen(vet);

    fim = tam - 1;
    for(i = 0; i < tam/2; i++){
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
}

int main(){

    char palavra[1000];

    scanf("%s", &palavra);

    inverter(palavra);

    printf("%s", palavra);

    return 0;
}