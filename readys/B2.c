#include<stdio.h>

int main(){

    system("cls");
    
    int jogador, player, gamer;

    scanf("%d %d %d", &jogador, &player, &gamer);

    if (jogador == 1 && player == 0 && gamer == 0){
        printf("A");
    }
    if (jogador == 0 && player == 1 && gamer == 1){
        printf("A");
    }
    if (jogador == 0 && player == 1 && gamer == 0){
        printf("B");
    }
    if (jogador == 1 && player == 0 && gamer == 1){
        printf("B");
    }
    if (jogador == 0 && player == 0 && gamer == 1){
        printf("C");
    }
    if (jogador == 1 && player == 1 && gamer == 0){
        printf("C");
    }
    if (jogador == 0 && player == 0 && gamer == 0){
        printf("EMPATE");
    }
    if (jogador == 1 && player == 1 && gamer == 1){
        printf("EMPATE");
    }

    return 0;
}