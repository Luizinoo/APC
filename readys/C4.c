#include<stdio.h>

int main(){

    int linhas;

    scanf("%d", &linhas);

    int num[linhas];

    for (int contador = 0; contador < linhas; contador++){
        scanf("%d", &num[contador]);
    }

    for (int contador = 0; contador < linhas; contador++){
        if (num[contador]%2 == 0){
            printf("%d ", num[contador]);
        }
    }

    printf("\n");

    for (int contador = 0; contador < linhas; contador++){
        if (num[contador]%2 != 0){
            printf("%d ", num[contador]);
        }
    }

    return 0;
}