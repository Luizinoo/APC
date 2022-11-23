#include<stdio.h>

int main(void){

    float prov1, prov2, prov3, trabalho, mediaprim, mediafin;
    float list1, list2, list3, list4, list5, medialist;

    system("cls");

    scanf("%f", &prov1);
    scanf("%f", &prov2);
    scanf("%f", &prov3);
    scanf("%f", &trabalho);
    scanf("%f", &list1);
    scanf("%f", &list2);
    scanf("%f", &list3);
    scanf("%f", &list4);
    scanf("%f", &list5);
    
    system("cls");

    mediaprim=(prov1+2*prov2+3*prov3+2*trabalho)/8;
    medialist=(list1+list2+list3+list4+list5)/10;
    mediafin=mediaprim+medialist;
    printf("%.2f", mediafin);

    return 0;
}