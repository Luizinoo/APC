#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checaprimo (int numero){

    bool ehprimo;
    
    if (numero == 1){
        return false;
    }
    if (numero == 2){
        return true;
    }
    for(int j = 3; j<= sqrt(numero); j+=2){
        if (numero%j == 0){
            ehprimo = false;
            break;
        }
        ehprimo=true;
    }
    
    return ehprimo;
}

bool checaarrojado (int numero){

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