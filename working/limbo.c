#include<stdio.h>
#include<stdbool.h>
#include<math.h>


int main(){

    int restaurantes, resultados;

    for(int i = 1; i <= 3; i++){
        scanf("%d", &restaurantes); 
        for ( i = 1; i < restaurantes; i++){
            scanf("%d", &resultados);
        }
    }

    printf("%d", resultados);

    return 0;
}