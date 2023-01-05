#include<stdio.h>
#include<string.h>

int main(){

    char usuario[1001], aux;

    scanf("%s", &usuario);

    printf("%s", usuario);

    int i, fim, tam = strlen(usuario);

    fim = tam - 1;
    for(i = 0; i < tam/2; i++){
        aux = usuario[i];
        usuario[i] = usuario[tam-i-1];
        usuario[tam-i-1] = aux;
        fim--;
    }
    
    printf(".");
    printf("%s", usuario);
    printf("@unb.br");
    

    return 0;
}