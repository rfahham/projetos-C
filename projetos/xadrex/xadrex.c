#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("O bispo foi movido para a Cima, Direita %d vezes\n", i);
    }

    for (int i = 1; i <= 8; i++) {
        printf("A rainha foi movida para a Esquerda %d vezes\n", i);
    }

    for (int i = 1; i <= 5; i++) {
        printf("A torre foi movida para a Direita %d vezes\n", i);
    }
   
    return 0;
}