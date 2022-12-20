#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int linhas, numero;
    bool ehprimo = true;

    system("cls");

    scanf("%d", &linhas);

    ehprimo=

    while(numero!=0){
        numero=numero/10;
        printf("%d\n", numero);
        break;
    }

    return 0;
}

int primo (candidato){

    int numero;

    for(int i = 1; i <= linhas; i++){
        scanf("%d", &numero);
        for(int j = 2; j<numero; j++ ){
            ehprimo=true;
            if (0==numero%j){
                ehprimo = false;
                break;
            }
        }
    }
}