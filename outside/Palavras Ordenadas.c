#include <stdio.h>
char ord(char v[]){
    int j;
    for(j=0;v[j]!='\0';j++){

    }
    if(j==1){
        return 'O';
    }
    for(int i=1;v[i]!='\0';i++){
        if(v[i]<=v[i-1]){
            return 'N';
        }
    }
    return 'O';
}

int main(){
    int n,aux=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char str[44]={};
        char str2[44]={};
        scanf("%s",str);
        for(int j=0;str[j]!='\0';j++){
            if(str[j]>='A' && str[j]<='Z'){
                str2[j]=str[j] + ' ';
            }else{
                str2[j]=str[j];
            }    
        }
        printf("%s: %c\n",str,ord(str2));
    }
    return 0;
}