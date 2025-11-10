# Criando funções em C

Em C, uma **função** é um bloco de código que executa uma tarefa específica e pode ser reutilizado em diferentes partes do programa.

---

## ✅ Estrutura básica de uma função em C:

```c
tipo_de_retorno nome_da_funcao(parâmetros) {
    // corpo da função
    return valor; // se o tipo de retorno não for void
}
```

---

## 🧱 Partes da função:

| Parte             | Exemplo             | Explicação                                        |
| ----------------- | ------------------- | ------------------------------------------------- |
| `tipo_de_retorno` | `int`, `float`, etc | O tipo do valor que a função devolve com `return` |
| `nome_da_funcao`  | `soma`, `main`, etc | O nome da função                                  |
| `parâmetros`      | `int a, int b`      | Valores que a função recebe                       |
| `corpo`           | `{ ... }`           | O que a função faz                                |

---

## 📌 Exemplo 1: Função que soma dois números

```c
#include <stdio.h>

// Declaração da função
int somar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = somar(10, 5);
    printf("Resultado: %d\n", resultado);
    return 0;
}
```

🔹 Saída:

```
Resultado: 15
```

---

## 📌 Exemplo 2: Função `void` (sem retorno)

```c
#include <stdio.h>

void saudacao() {
    printf("Olá, tudo bem?\n");
}

int main() {
    saudacao();  // chama a função
    return 0;
}
```

🔹 Saída:

```
Olá, tudo bem?
```

---

## 🛠️ Declaração vs Definição (opcional, mas importante):

Se você quiser organizar melhor seu código, pode **declarar** a função antes do `main()` e **definir** depois:

```c
#include <stdio.h>

// Declaração (protótipo)
int multiplicar(int a, int b);

int main() {
    printf("Resultado: %d\n", multiplicar(3, 4));
    return 0;
}

// Definição
int multiplicar(int a, int b) {
    return a * b;
}
```

---


