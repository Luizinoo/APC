#include<stdio.h>

int main(){

    char palavra[10000];
    int total, num;

    scanf("%s", &palavra);

    num = string(palavra);

    printf("%d", num);

    return 0;
}

int string(char string[]){

    int caracteres = 0;

    while (string[caracteres] != '\0'){
        caracteres++;
    }

    return caracteres;
}