#include<stdio.h>

int main(){
    int batidas;

    system("cls");

    scanf("%d", &batidas);

    for (int contador = 0; contador < batidas; contador++){
        if (1==contador%2){
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
        else{
            printf("THUMS THUMS THUMS\n");
        }
    }
    
    return 0;
}