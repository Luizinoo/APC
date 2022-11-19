#include<stdio.h>

int main(void){

    system("cls");

    int i1, i2, i3, i4;

    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1>=i2 && i1>=i3 && i1>=i4){
            printf("%d", i1);}
    else 
        if (i2>=i1 && i2>=i3 && i2>=i4){
            printf("%d", i2);}
        else 
            if (i3>=i1 && i3>=i2 && i3>=i4){
                printf("%d", i3);}
            else
                if (i4>=i1 && i4>=i2 && i4>=i3){
                    printf("%d", i4);}
    return 0;
}