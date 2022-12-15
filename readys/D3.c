#include <stdio.h>

int main(){
    int linhas, numero, resposta = 0;

    system("cls");

    do{
        scanf("%d", &numero);
        if (0==numero%2){
            resposta = numero + resposta;
        }
    } while (numero != 0);

    printf("%d", resposta);

    return 0;
}