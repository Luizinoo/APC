#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);

    for (int linhas = 1; linhas <= numero; linhas++){
        for (int colunas = 1; colunas <= linhas; colunas++){
            printf("%02d ", linhas);
        }
        printf("\n");
    }

    printf("\n");

    for (int linhas = 1; linhas <= numero; linhas++){
        for (int colunas = 1; colunas <= linhas; colunas++){
            printf("%02d ", colunas);
        }
        printf("\n");
    }
    

    return 0;
}