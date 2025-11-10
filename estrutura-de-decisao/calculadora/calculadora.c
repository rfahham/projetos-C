#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    // Exibe o menu de operações
    printf("Calculadora simples\n");
    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operador);  // O espaço antes de %c ignora qualquer caractere anterior (como \n)

    // Solicita os números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Estrutura switch para as operações
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}
