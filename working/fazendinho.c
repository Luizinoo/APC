#include<stdio.h>

int main(){

    int numero, num = 0;

    scanf("%d", &numero);

    for (int linhas = 1; linhas <= numero; linhas++){
        for (int colunas = 1; colunas <= linhas; colunas++){
            num++;
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}