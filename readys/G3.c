#include <stdio.h>

int main(){
    int linhas, colunas;

    system("cls");

    scanf("%d %d", &linhas, &colunas);

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("[%03d,", i);
            printf("%03d] ", j);
        }
        printf("\n");
    }

    return 0;
}