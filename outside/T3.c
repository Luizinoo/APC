#include <stdio.h>

int main () {

    int valores[10000], linhas, tentativa, resultado=0;

    scanf("%d", &linhas);

    for (int i = 0; i < linhas; i++){
        scanf("%d", &valores[i]);
    }
    for (int i = 0; i < linhas; i++){
        resultado = valores[i] + resultado;
    }

    scanf("%d", &tentativa);

    if (tentativa == resultado){
        printf("Acertou");
    }else{
        printf("Errou");
    }
    
    return 0;
}