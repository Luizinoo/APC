#include<stdio.h>

int main(){

    int linhas, diferente, diferenciante = 0;

    scanf("%d", &linhas);

    int num[linhas];

    for (int contador = 0; contador < linhas; contador++){
        scanf("%d", &num[contador]);
    }

    scanf("%d", & diferente);

    for (int contador = 0; contador < linhas; contador++){
        if (num[contador] == diferente){
            printf("pertence");
            diferenciante++;
        }
    }

    if (diferenciante == 0){
        printf("nao pertence");
    }

    return 0;
}