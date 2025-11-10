// - **Bispo:** Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").

#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("O bispo foi movido para a Cima, Direita %d vezes\n", i);

    }
   
    return 0;
}
