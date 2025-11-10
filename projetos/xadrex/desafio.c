#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (int i = 1; i <= 5; i++) {
        printf("O bispo foi movido para a Cima, Direita %d vezes\n", i);
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (int i = 1; i <= 5; i++) {
        printf("A torre foi movida para a Direita %d vezes\n", i);
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (int i = 1; i <= 8; i++) {
        printf("A rainha foi movida para a Esquerda %d vezes\n", i);
        
    }

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Definindo a quantidade de movimentos
    int movimentosCima = 2;
    int movimentosDireita = 1;

    // Loop for externo: movimenta o Cavalo duas vezes para cima
    for (int i = 0; i < movimentosCima; i++) {
        printf("Cima\n");

        // Loop while interno: só executa no último movimento para cima
        // para simular o movimento "em L" do Cavalo
        int j = 0;
        while (j < movimentosDireita && i == movimentosCima - 1) {
            printf("\n"); // Separação visual
            printf("Direita\n");
            j++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
