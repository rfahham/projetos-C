#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Sistema de movimentação das peças de xadrez com estruturas de repetição e recursividade.

// ============================
// Função recursiva: Bispo (Diagonal)
// ============================
void moverBispoDiagonal(int casas) {
    if (casas <= 0) {
        printf("O Bispo parou de se mover.\n\n");
        return;
    }

    // Loop externo - movimento vertical (para cima)
    for (int i = 1; i <= casas; i++) {
        printf("Bispo: Movendo para Cima (%d/%d)\n", i, casas);

        // Loop interno - movimento horizontal (para a direita)
        for (int j = 1; j <= casas; j++) {
            printf("  Bispo: Movendo para Direita (%d/%d)\n", j, casas);

            if (i == j)
                printf("  -> Bispo em posição diagonal (%d, %d)\n", i, j);
        }
        printf("\n");
    }

    printf("Recursão do Bispo: mover %d casas restantes...\n\n", casas - 1);
    moverBispoDiagonal(casas - 1);
}

// ============================
// Função recursiva: Torre (Horizontal)
// ============================
void moverTorreDireita(int casas) {
    if (casas <= 0) {
        printf("A Torre parou de se mover.\n\n");
        return;
    }

    for (int i = 1; i <= casas; i++) {
        printf("Torre: Movendo para a Direita (%d/%d)\n", i, casas);
    }

    printf("Recursão da Torre: mover %d casas restantes...\n\n", casas - 1);
    moverTorreDireita(casas - 1);
}

// ============================
// Função recursiva: Rainha (Horizontal - Esquerda)
// ============================
void moverRainhaEsquerda(int casas) {
    if (casas <= 0) {
        printf("A Rainha parou de se mover.\n\n");
        return;
    }

    for (int i = 1; i <= casas; i++) {
        printf("Rainha: Movendo para a Esquerda (%d/%d)\n", i, casas);
    }

    printf("Recursão da Rainha: mover %d casas restantes...\n\n", casas - 1);
    moverRainhaEsquerda(casas - 1);
}

// ============================
// Função: Cavalo (Movimento em L com loops avançados)
// ============================
void moverCavalo() {
    int movimentosCima = 2;
    int movimentosDireita = 1;

    printf("Movimentação do Cavalo:\n\n");

    // Loop externo controla o movimento vertical (para cima)
    for (int i = 0, j = 0; i < movimentosCima || j < movimentosDireita; ) {

        if (i < movimentosCima) {
            printf("Cavalo: Cima (%d/%d)\n", i + 1, movimentosCima);
            i++;

            // Continue evita o movimento lateral antes do tempo
            if (i < movimentosCima)
                continue;
        }

        // Movimento lateral (para a direita)
        while (j < movimentosDireita) {
            printf("Cavalo: Direita (%d/%d)\n", j + 1, movimentosDireita);
            j++;

            if (i == movimentosCima && j == movimentosDireita) {
                printf("\nMovimento em 'L' concluído!\n\n");
                break;
            }
        }

        if (i == movimentosCima && j == movimentosDireita)
            break;
    }
}

// ============================
// Função principal
// ============================
int main() {
    printf("=== Desafio de Xadrez - MateCheck ===\n\n");

    // Movimentações das peças
    moverBispoDiagonal(3);     // Bispo se move na diagonal
    moverTorreDireita(3);      // Torre se move horizontalmente
    moverRainhaEsquerda(3);    // Rainha se move para a esquerda
    moverCavalo();              // Cavalo se move em "L"

    printf("=== Fim do programa ===\n");
    return 0;
}
