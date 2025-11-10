// // - **Cavalo:** Move-se em "L". 
 
#include <stdio.h>

int main() {
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

    return 0;
}
// O loop externo (for) controla os movimentos para baixo, enquanto o loop interno (while) controla o movimento para a esquerda, mas só é executado após o Cavalo ter se movido duas casas para baixo, simulando o movimento em "L".