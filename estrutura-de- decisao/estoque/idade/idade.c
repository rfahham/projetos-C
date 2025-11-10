// Comparação de idades

// O programa verifica se uma pessoa é maior de idade (18 anos ou mais) e exibe uma mensagem indicando que a pessoa é maior de idade. Caso contrário, exibe uma mensagem indicando que a pessoa é menor de idade. Veja!
#include <stdio.h>

int main() {
  int idade = 16;

  if (idade >= 18) {
    printf("Você é maior de idade\n");
  } else {
    printf("Você é menor de idade\n");
  }

  return 0;
}

// A saída desse programa seria: "Você é menor de idade".