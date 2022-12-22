#include <stdio.h>

int main( ) {
    int n;
    scanf("%d", &n);

    int v[n];

    // Pegue todos os valores de 'V'
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int menor_numero = v[0];

    for (int i = 0; i < n; i++) {
        if ( v[i] < menor_numero ) {
            menor_numero = v[i];
        }
    }

    int segundo_menor = v[0];

    for (int i = 0; i < n; i++) {
        // Ignore o menor numero de todos.
        if ( v[i] != menor_numero ) {
            if ( v[i] < segundo_menor ) {
                segundo_menor = v[i];
            }
        }
    }

    int terceiro_menor = v[0];

    for (int i = 0; i < n; i++) {
        // Ignore o menor numero de todos.
        if ( v[i] != menor_numero && v[i] != segundo_menor ) {
            if ( v[i] < terceiro_menor ) {
                terceiro_menor = v[i];
            }
        }
    }

    printf("%d\n%d\n", segundo_menor, terceiro_menor);
    return 0;
}