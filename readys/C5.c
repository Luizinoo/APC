#include<stdio.h>

int strcon(char conta[]){

    int caracteres = 0;

    while (conta[caracteres] != '\0'){
        caracteres++;
    }
    
    return caracteres;
}

int main(){

    int linhas, caracteres, atual = 0;
    char palavras[10000];
    
    scanf("%d", &linhas);

    for (int i = 0; i < linhas; i++){
        scanf("%s", &palavras);
        caracteres = strcon(palavras);
        if (caracteres > atual){
            atual = caracteres;
        }
    }
    
    printf("%d", atual);
    

    return 0;
}