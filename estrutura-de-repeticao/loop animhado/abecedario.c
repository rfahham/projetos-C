#include <stdio.h>
 
int main() {

    int i, j; //
    char letra;

    for (i = 1; i <= 26; i++) {
        letra = 'A';
        for (j = 1; j <= i; j++) {  // Loop interno para imprimir letras
            printf("%c ", letra);
            letra++;
        }
        printf("\n");
    }
    return 0;
}
// Esse programa imprime o alfabeto em forma de triângulo, onde cada linha contém letras do alfabeto começando de 'A' até a letra correspondente à linha atual. O loop externo controla o número de linhas, enquanto o loop interno imprime as letras em cada linha.