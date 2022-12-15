#include <stdio.h>

int main(){
    int linhas, numero, pares = 0, impares = 0;

    system("cls");

    do{
        scanf("%d", &numero);
        if (0==numero%2){
            pares = numero + pares;
        }else{
            impares = numero + impares;
        }
    } while (numero != 0);

    printf("%d ", pares);
    printf("%d", impares);


    return 0;
}