#include <stdio.h>

void moverRainhaEsquerda(int casas) {
    // Caso base da recursão
    if (casas <= 0) {
        printf("A Rainha parou de se mover.\n");
        return;
    }

    // Mostra o movimento atual
    printf("A Rainha foi movida para a Esquerda (%d)\n", casas);

    // Chamada recursiva: move novamente com uma casa a menos
    moverRainhaEsquerda(casas - 1);
}

int main() {
    moverRainhaEsquerda(8);
    return 0;
}
// Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
// - **Rainha:** Move-se em qualquer direção (horizontal, vertical e diagonal). Seu