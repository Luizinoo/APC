#include <stdio.h>

int main( ) {
  int n;
  scanf("%d", &n);

  // Crie o vetor 'V' com tamanho 'N' dado pelo usuario.
  int v[n];

  // Repetir 'N' vezes.
  for (int i = 0; i < n; i++) {
    // Pegar cada um dos 'N' numeros e guarda-los
    // dentro de 'V'.
    scanf("%d", &v[i]);
  }

  int menor_numero = v[0];
  int indice_do_menor_numero = 0;

  for (int i = 0; i < n; i++) {
    int numero_atual = v[i];

    if ( numero_atual < menor_numero ) {
      menor_numero = numero_atual;
      indice_do_menor_numero = i;
    }
  }
  
  printf("%d\n", indice_do_menor_numero);
  return 0;
}
