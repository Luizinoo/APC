#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char frase[1001];
    int tam, osz = 0;

    while (scanf(" %s", frase) != EOF) {
        tam=strlen(frase);

        for (int i = 0; i < tam; i++){
        if (frase[i] == 'o'){
            osz++   ;
        }
    }
    }
    
    printf("%d\n", osz);

    return 0;
}