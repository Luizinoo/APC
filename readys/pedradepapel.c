#include<stdio.h>

int main(){

    int player, gamer;

    scanf("%d", &player);
    scanf("%d", &gamer);

    if (gamer == 0 && player == 1 || gamer == 0 && player == 4){
        printf("A");
        return 0;
    }
    if (gamer == 1 && player == 2 || gamer == 1 && player == 3){
        printf("A");
        return 0;
    }
    if (gamer == 2 && player == 0 || gamer == 2 && player == 4){
        printf("A");
        return 0;
    }
    if (gamer == 3 && player == 0 || gamer == 3 && player == 2){
        printf("A");
        return 0;
    }
    if (gamer == 4 && player == 3 || gamer == 4 && player == 1){
        printf("A");
        return 0;
    }
    if (player == 0 && gamer == 1 || player == 0 && gamer == 4){
        printf("B");
        return 0;
    }
    if (player == 1 && gamer == 2 || player == 1 && gamer == 3){
        printf("B");
        return 0;
    }
    if (player == 2 && gamer == 0 || player == 2 && gamer == 4){
        printf("B");
        return 0;
    }
    if (player == 3 && gamer == 0 || player == 3 && gamer == 2){
        printf("B");
        return 0;
    }
    if (player == 4 && gamer == 3 || player == 4 && gamer == 1){
        printf("B");
        return 0;
    }
    if (player == gamer){
        printf("empate");
        return 0;
    }
}