#include<stdio.h>

int main(){

    int linhas, diferenciante = 0;

    scanf("%d", &linhas);

    int num[linhas];
    int num2[linhas];

    for (int contador = 0; contador < linhas; contador++){
        scanf("%d", &num[contador]);
    }
    for (int contador = 0; contador < linhas; contador++){
        scanf("%d", &num2[contador]);
    }

    for (int contador = 0; contador < linhas; contador++){
        if (num[contador] == num2[contador]){
            diferenciante++;
        }
    }

    if (diferenciante == linhas){
        printf("sim");
    }
    if (diferenciante != linhas){
        printf("nao");
    }
    

    return 0;
}