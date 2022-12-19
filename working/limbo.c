#include<stdio.h>
#include<stdbool.h>

int main(){
    int linhas, numero;
    bool ehprimo = true;

    system("cls");

    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++){
        scanf("%d", &numero);
        for(int j = 2; j<numero; j++ ){
            ehprimo=true;
            if (0==numero%j){
                ehprimo = false;
                break;
            }
        }
        if (ehprimo){
            printf("e primo\n");
        }
        else{
            printf("nao e primo\n");
        }
    }

    return 0;
}