// Verificação de número par

// O o programa verifica se numero é divisível por 2. O operador % retorna o resto da divisão. Se o resto da divisão de numero por 2 for igual a 0, então o número é par e imprime "O número é par". Caso contrário, ele imprime "O número é ímpar". 
#include <stdio.h>

int main() {
  int numero = 10;

  if (numero % 2 == 0) {
    printf("O número é par\n");
  } else {
    printf("O número é ímpar\n");
  }

  return 0;
}
