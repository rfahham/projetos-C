#include <stdio.h>

// Função recursiva para mover o Bispo
void moverBispoDiagonal(int casas) {
    // Caso base da recursão: se não há mais casas, termina
    if (casas <= 0) {
        printf("O Bispo parou de se mover.\n");
        return;
    }

    // Loop externo - movimento vertical (para cima)
    for (int i = 1; i <= casas; i++) {
        printf("Movendo para Cima (%d/%d)\n", i, casas);

        // Loop interno - movimento horizontal (para a direita)
        for (int j = 1; j <= casas; j++) {
            printf("  Movendo para Direita (%d/%d)\n", j, casas);

            // Simula o movimento em diagonal
            if (i == j) {
                printf("  -> O Bispo está em posição diagonal (%d, %d)\n", i, j);
            }
        }

        printf("\n"); // Separação entre ciclos
    }

    printf("Recursão: mover %d casas restantes...\n\n", casas - 1);

    // Chamada recursiva: reduz o número de casas a mover
    moverBispoDiagonal(casas - 1);
}

int main() {
    moverBispoDiagonal(3);  // Pode alterar o número de casas
    return 0;
}



// Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
// - **Bispo:** Move-se na diagonal. Seu programa deverá simular o movimento do