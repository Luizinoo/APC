#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);

    for (int linhas = 1; linhas <= numero; linhas++){
        for (int colunas = 1; colunas <= linhas; colunas++){
            printf("%d ", colunas);
        } 
        printf("\n");
    }
    

    return 0;
}