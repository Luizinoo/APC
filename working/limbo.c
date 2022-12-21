#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checaprimo (numero){
    
    bool ehprimo;

    for(int j = 2; j<numero; j++ ){
        ehprimo=true;
            if (0 == numero%j){
                ehprimo = false;
            break;
        }
    }return ehprimo;
}

bool checaarrojado (numero){

    while(numero!=0){
        if (checaprimo(numero)){
            numero = numero/10;
        }else{
            return false;
        }
    }return true;
}

int main(){

    int linhas, numero;

    scanf("%d", &linhas);
    for(int i = 1; i <= linhas; i++){
        scanf("%d", &numero);
        if (checaarrojado(numero)){
            printf("arrojado\n");
        }else{
            printf("nao arrojado\n");
        }
    }

    return 0;
}