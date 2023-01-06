#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int acertos = 0, tam;
    char tentativas[10000], corretas[10000];

    scanf("%d", &tam);
    scanf("%s", tentativas);
    scanf("%s", corretas);


    for (int i = 0; i < tam; i++){
        if (tentativas[i] == corretas[i]){
            acertos++;
        }
    }
    
    printf("%d", acertos);

    return 0;
}