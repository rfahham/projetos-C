#include <stdio.h>

void moverTorreDireita(int casas) {
    for (int i = 1; i <= 5; i++) {
        printf("A torre foi movida para a Direita %d vezes\n", i);
        
    }
}
 
int main() {
    moverTorreDireita(5);
    return 0;
}

// Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
// - **Torre:** Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.