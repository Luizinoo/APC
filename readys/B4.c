#include<stdio.h>

int main(){

    int linhas, menornumero, atual, indice; // declaro as variaveis

    scanf("%d", &linhas); //aqui eu determino o numero de entradas

    int numero[linhas]; //aqui eu declaro o vetor 

    for (int contador = 0; contador < linhas; contador++){ //inicio o loop
        scanf("%d", &numero[contador]); //leio os vetores em loop 
        if (contador==0){   //verifico se é a primeira repetição
            menornumero=numero[0];  //menornumero recebe o primeiro vetor
            indice=0;   //indice recebe 0
        }
        atual = numero[contador];   //a variavel atual recebe a variavel do numero a cada vez que passa pelo loop
        if (atual < menornumero){ //verifica se a variavel atual é menor que menornumero
            menornumero=atual;
            indice=contador;   //aqui indice recebe contador
        }
    }
    
    printf("%d", indice); //aqui o indice é impresso

    return 0;
}