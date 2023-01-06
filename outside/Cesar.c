#include <stdio.h>
char converter(char a){
    char vetor1[26] = {'N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};
    if(a>='A' && a<='Z'){
        int posicao = (a - 'A');
        char correct = vetor1[posicao];
        return correct;
    }else{
        return a;
    }
}
int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        int a;
        char str[1002]={};
        char str2[1002]={};
        fgets(str,1000,stdin);
        for(int j=0;str[j] != '\0';j++){
            str2[j]=converter(str[j]);
        }
        for(a=0;str2[a]!='\n' && str2[a]!='\0';a++){

        }
        str2[a]='\0';
        printf("%s\n",str2);
    }
    return 0;
}