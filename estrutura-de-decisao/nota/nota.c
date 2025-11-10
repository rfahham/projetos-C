// O programa verifica se a nota de um aluno é maior ou igual a 60 e exibe uma mensagem indicando que o aluno passou. Caso contrário, exibirá uma mensagem indicando que o aluno não passou. Será que o aluno passou? Confira!

#include <stdio.h>

int main() {
  int nota = 65;

  if (nota >= 60) {
    printf("Você passou!\n");
  } else {
    printf("Você não passou.\n");
  }

  return 0;
}

// A saída desse programa seria: "Você passou!".