#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checaprimo (numero){

    bool ehprimo;
    
    if (numero == 1){
        ehprimo = false;
    }
    if (numero == 2){
        ehprimo = true;
    }
    for(int j = 2; j<= sqrt(numero); j++){
        if (numero%j == 0){
            ehprimo = false;
            break;
        }
        ehprimo=true;
    }
    
    return ehprimo;
}

bool checaarrojado (numero){

    while(numero != 0){
        if (checaprimo(numero)){
            numero = numero/10;
        }else{
            return false;
        }
    }

    return true;
}

int main(){

    int linhas, numero;

    scanf("%d", &linhas); 
    for(int i = 1; i <= linhas; i++){
        scanf("%d", &numero);
        if (checaarrojado(numero)){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }

    return 0;
}