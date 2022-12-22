#include<stdio.h>

int main(){

    int linhas, menornumero, atual, indice;

    scanf("%d", &linhas);

    int numero[linhas];

    for (int contador = 0; contador < linhas; contador++){
        scanf("%d", &numero[contador]);
        atual = numero[contador];
        if (atual < menornumero){
            indice=contador;
        }
    }
    
    printf("%d", indice);

    return 0;
}