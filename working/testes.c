#include <stdio.h>
#include <string.h>

int main () {

    char frase[1000], ch[1000];
    int linhas, tam;

    scanf("%d", &linhas);

    for (int i = 0; i <= linhas; i++){
        fgets(frase, 1000, stdin);
        tam = strlen(frase);
        for(int j = 0; j < tam; j++){
            ch[j]=(frase[j] + 'A' + 13) % 26 + 'A';
        }
        printf("%s", ch);
    }
    
    return 0;
}