#include <stdio.h>
 
void moverRainhaEsquerda(int casas) {
    for (int i = 1; i <= 8; i++) {
        printf("A rainha foi movida para a Esquerda %d vezes\n", i);

    }
}

int main() {
    moverRainhaEsquerda(8);
    return 0;
}

// Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
// - **Rainha:** Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.