#include<stdio.h>

int main(){
    int linhas, numero, resposta = 0;

    system("cls");

    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++){
        scanf("%d", &numero);
        resposta = numero + resposta;
    }

    printf("%d", resposta);

    return 0;
}