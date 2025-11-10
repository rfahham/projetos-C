// Nesse caso, o programa verifica se numero1 é maior que numero2. Se for, ele exibe a mensagem "numero1 é maior que numero2". Caso contrário, nada será exibido. Nesse exemplo, a condição numero1 > numero2 (8 > 5) é verdadeira. Então, o programa executa o comando dentro do if.

#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Lendo dois números do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Calculando a soma dos dois números
    soma = num1 + num2;

    // Exibindo o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    return 0;
}