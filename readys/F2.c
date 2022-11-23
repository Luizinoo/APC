#include<stdio.h>

int main(){

    int A, T, cortado, inteiro, total;

    system("cls");

    scanf("%d", &A);
    scanf("%d", &T);

    cortado=((A+T)*70)/2;
    inteiro=160*70;
    total=inteiro-cortado;

    if (cortado > total){
        printf("1\n");
    }else if (total > cortado){
            printf("2\n");
    }else{
        printf("0");
    }
    


    return 0;
}