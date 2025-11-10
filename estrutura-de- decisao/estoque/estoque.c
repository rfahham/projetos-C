// Verificação de estoque

// O programa a seguir verifica se o estoque de um produto está abaixo de um nível crítico (por exemplo, 5 unidades) e exibe uma mensagem indicando que o estoque está baixo. Caso contrário, exibe uma mensagem indicando que o estoque está adequado.

#include <stdio.h>

int main() {
  int estoque = 3;

  if (estoque < 5) {
    printf("Estoque baixo\n");
  } else {
    printf("Estoque adequado\n");
  }

  return 0;
}

// A saída desse programa seria: "Estoque baixo".
