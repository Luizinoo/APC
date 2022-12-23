#include<stdio.h>

int main(){

    int linhas, media = 0, verificador = 0;

    scanf("%d", &linhas);

    int num[linhas];

    for (int contador = 0; contador < linhas; contador++){
        scanf("%d", &num[contador]);
    }
    for (int contador = 0; contador < linhas; contador++){
        media = media + num[contador];
    }

    media=media/linhas;

    for (int contador = 0; contador < linhas; contador++){
        if (num[contador] > media){
            printf("%d ", num[contador]);
            verificador ++;
        }   
    }

    if (verificador == 0){
        printf("0");
    }

    return 0;
}