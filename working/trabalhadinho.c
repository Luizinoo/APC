#include<stdio.h>
#include<string.h>

int main(){

    char sopa[10000];
    int num, tam, resultado = 0;
    
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        scanf("%s", sopa);
    }

    tam = strlen(sopa);

    for (int i = 0; i < tam; i++){
        if (sopa[i] >= '1' && sopa[i] <= '9'){
            resultado = sopa[i] + resultado - 48;
        }
    }
    
    printf("%d", resultado);

}