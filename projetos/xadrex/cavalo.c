// // - **Cavalo:** Move-se em "L". 
 
#include <stdio.h>

int main() {
    // Quantidade de movimentos
    int movimentosCima = 2;
    int movimentosDireita = 1;

    printf("Movimentação do Cavalo:\n\n");

    // Loop externo controla os movimentos verticais (para cima)
    for (int i = 0, j = 0; i < movimentosCima || j < movimentosDireita; ) {

        // Se ainda há movimentos para cima
        if (i < movimentosCima) {
            printf("Cima (%d/%d)\n", i + 1, movimentosCima);
            i++;

            // Continue para evitar executar o movimento lateral prematuramente
            if (i < movimentosCima)
                continue;
        }

        // Ao terminar de subir, começa o movimento lateral
        while (j < movimentosDireita) {
            printf("\nDireita (%d/%d)\n", j + 1, movimentosDireita);
            j++;

            // Quebra o loop se o Cavalo completou o "L"
            if (i == movimentosCima && j == movimentosDireita) {
                printf("\nMovimento em 'L' concluído!\n");
                break;
            }
        }

        // Quebra total se o Cavalo terminou o movimento
        if (i == movimentosCima && j == movimentosDireita)
            break;
    }

    return 0;
}

// O loop externo (for) controla os movimentos para baixo, enquanto o loop interno (while) controla o movimento para a esquerda, mas só é executado após o Cavalo ter se movido duas casas para baixo, simulando o movimento em "L".
// Loops Complexos para o Cavalo: Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições. Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa. O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
