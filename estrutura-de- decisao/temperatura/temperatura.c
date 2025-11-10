// Verificação de temperatura

// O programa verifica se a temperatura está superior a 30 graus e exibe uma mensagem indicando que está calor. Para o valor apresentado, a condição será verdadeira.

#include <stdio.h>

int main() {
  float temperatura = 32.0;

  if (temperatura > 30.0) {
    printf("Está calor\n");
  }

  return 0;
}