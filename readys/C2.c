#include<stdio.h>

int main(void){

    system("cls");

    int parouimpar, parouimpar2, parouimpar3, A, B, C, D, vencedor1, vencedor2;

    scanf("%d", &parouimpar);
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &parouimpar2);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%d", &parouimpar3);
    scanf("%d", &vencedor1);
    scanf("%d", &vencedor2);

    if ((parouimpar == 0 && (A+B)%2==0) || (parouimpar == 1 && (A+B)%2==1)){
        if((parouimpar2 == 0 && (C+D)%2==0) || (parouimpar2 == 1 && (C+D)%2==1)){
            if((parouimpar3 == 0 && (vencedor1+vencedor2)%2==0) || (parouimpar3 == 1 && (vencedor1+vencedor2)%2==1)){
                printf("A");
                return 0;
            }
            if((parouimpar3 == 0 && (vencedor1+vencedor2)%2==1) || (parouimpar3 == 1 && (vencedor1+vencedor2)%2==0)){
                printf("C");
                return 0;
            }
        }
        if((parouimpar2 == 0 && (C+D)%2==1) || (parouimpar2 == 1 && (C+D)%2==0)){
            if((parouimpar3 == 0 && (vencedor1+vencedor2)%2==0) || (parouimpar3 == 1 && (vencedor1+vencedor2)%2==1)){
                printf("A");
                return 0;
            }
            if((parouimpar3 == 0 && (vencedor1+vencedor2)%2==1) || (parouimpar3 == 1 && (vencedor1+vencedor2)%2==0)){
                printf("D");
                return 0;
            }
        }
    }
    if ((parouimpar == 0 && (A+B)%2==1) || (parouimpar == 1 && (A+B)%2==0)){
        if((parouimpar2 == 0 && (C+D)%2==0) || (parouimpar2 == 1 && (C+D)%2==1)){
            if((parouimpar3 == 0 && (vencedor1+vencedor2)%2==0) || (parouimpar3 == 1 && (vencedor1+vencedor2)%2==1)){
                printf("B");
                return 0;
            }
            if((parouimpar3 == 0 && (vencedor1+vencedor2)%2==1) || (parouimpar3 == 1 && (vencedor1+vencedor2)%2==0)){
                printf("C");
                return 0;
            }
        }
        if((parouimpar2 == 0 && (C+D)%2==1) || (parouimpar2 == 1 && (C+D)%2==0)){
            if((parouimpar3 == 0 && (vencedor1+vencedor2)%2==0) || (parouimpar3 == 1 && (vencedor1+vencedor2)%2==1)){
                printf("B");
                return 0;
            }
            if((parouimpar3 == 0 && (vencedor1+vencedor2)%2==1) || (parouimpar3 == 1 && (vencedor1+vencedor2)%2==0)){
                printf("D");
                return 0;
            }
        }
    }
}