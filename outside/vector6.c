#include <stdio.h>

int main( ) {
    int n;
    scanf("%d", &n);

    int v[n];
    int w[n];

    // Pegar todos os numeros de 'V'
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Pegar todos os numeros de 'W'
    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }

    // Imprimir as somas de todos os numeros 
    // de 'V' com os seus pares em 'W'
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i] + w[i]);
    }

    return 0;
}