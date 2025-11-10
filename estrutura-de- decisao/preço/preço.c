// Comparação de preços

// Como seria um programa para comparar o preço de um produto e dizer se ele está caro a partir de determinado valor? O programa a seguir compara o preço de um produto com um valor fixo (100.0) e exibe uma mensagem indicando se o produto é caro ou barato. O produto está caro ou barato?

#include <stdio.h>

int main() {
  float preco = 120.0;

  if (preco > 100.0) {
    printf("O produto é caro\n");
  } else {
    printf("O produto é barato\n");
  }

  return 0;
}
// A saída desse programa seria: "O produto é caro".
