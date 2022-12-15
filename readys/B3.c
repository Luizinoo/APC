#include<stdio.h>

int main(){
    int linhas, numero, resposta;

    system("cls");

    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++){
        scanf("%d", &numero);
        if (numero > resposta || i == 1){
            resposta = numero;
        }
    }

    printf("%d", resposta);

    return 0;
}