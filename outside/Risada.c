#include <stdio.h>
#include <string.h>

int main(){
    char risada[62]={};
    scanf("%s",risada);
    char risada_contrario[62]={};
    char seq1[62]={};
    char seq2[62]={};
    int compara=0;
    if(strlen(risada)==1){
        if(risada[0]=='a'||risada[0]=='e'||risada[0]=='i'||risada[0]=='o'||risada[0]=='u'){
            printf("S");
            return 0;
        }else{
            printf("Valor invalido!");
            return 0;
        }
    }
    int aux=0;
    for(int i=0;i<strlen(risada);i++){
        if(risada[i]=='a'||risada[i]=='e'||risada[i]=='i'||risada[i]=='o'||risada[i]=='u'){
            seq1[aux]=risada[i];
            aux++;
        }    
        risada_contrario[i]=risada[strlen(risada)-1-i];
    }
    if(seq1[0]=='\0'){
        printf("Valor invalido!");
        return 0;
    }
    aux=0;
    for(int i=0;i<strlen(risada);i++){
        if(risada_contrario[i]=='a'||risada_contrario[i]=='e'||risada_contrario[i]=='i'||risada_contrario[i]=='o'||risada_contrario[i]=='u'){
            seq2[aux]=risada_contrario[i];
            aux++;
        }
    }
    for(int i=0;i<strlen(seq1);i++){
        if(seq1[i]!=seq2[i]){
            compara=1;
        }
    }
    
    if(compara==0){
        printf("S");
    }
    else{
        printf("N");
    }
    return 0;
}