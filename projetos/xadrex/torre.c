#include <stdio.h>

void moverTorreDireita(int casas) {
    // Caso base: parar quando não houver mais casas para mover
    if (casas <= 0) {
        printf("A Torre parou de se mover.\n");
        return;
    }

    printf("A Torre foi movida para a Direita (%d)\n", casas);

    // Chamada recursiva: move a torre novamente com uma casa a menos
    moverTorreDireita(casas - 1);
}

int main() {
    moverTorreDireita(5);
    return 0;
}
