#include<stdio.h>

int main(){

    int linhas;

    scanf("%d", &linhas);

    int num1[linhas], num2[linhas];

    for (int contador = 0; contador < linhas; contador++){
        scanf("%d", &num1[contador]);
    }

    for (int contador2 = 0; contador2 < linhas; contador2++){
        scanf("%d", &num2[contador2]);
    }

    for (int contador3 = 0; contador3 < linhas; contador3++){
        printf("%d ", num1[contador3]+num2[contador3]);
    }

    return 0;
}