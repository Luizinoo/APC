#include <stdio.h>

int main () {

    char usuario[200], frase[200], palavra[200];
    int j = 0;

    scanf("%s", &usuario);
    scanf(" %[^\n]s", frase);
    
    for (int i = 0; frase[i] != '\0'; i++) {
        palavra[j] = frase[i];
        j = palavra[j] == ' ' && frase[i + 1] != ' ' && frase[i + 1] != '\0' ? 0 : j + 1;
    }

    palavra[j] = '\0';

    printf("%s", usuario);
    printf(".");
    printf("%s", palavra);
    printf("@unb.br");
}