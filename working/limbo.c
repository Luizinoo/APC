#include<stdio.h>
#include<stdbool.h>

int main(){
    int linhas, numero;
    bool ehprimo = true;

    system("cls");

    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++){
        system("pause");
        system("cls");
        scanf("%d", &numero);
        for(int j = 2; j<numero; j++ ){
            if (0==numero%j){
                ehprimo = false;
                // printf("nao e primo\n");
                break;
            }
            // else{
            //     printf("e primo\n");
            //     break;
            // }
        }
        if (ehprimo)
        {
            printf("e primo\n");
        }
        else{
            printf("nao e primo\n");
        }
        
        
    }
    return 0;
}