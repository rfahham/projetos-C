# Estruturas de Repetição

A linguagem C possui **três estruturas principais de repetição** (ou "loops"):

1. `for` – quando você sabe **quantas vezes** quer repetir algo
2. `while` – quando repete **enquanto uma condição for verdadeira**
3. `do...while` – similar ao `while`, mas **garante que o bloco execute pelo menos uma vez**

---

## 🔁 1. Exemplo com `for`

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Contando: %d\n", i);
    }
    return 0;
}
```

🔹 **Saída:**

```
Contando: 1
Contando: 2
Contando: 3
Contando: 4
Contando: 5
```

---

## 🔁 2. Exemplo com `while`

```c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("Contando: %d\n", i);
        i++;
    }
    return 0;
}
```

🔹 Funciona igual ao `for`, mas separando inicialização, condição e incremento.

---

## 🔁 3. Exemplo com `do...while`

```c
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("Contando: %d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}
```

🔹 Aqui o código dentro do `do` **executa antes** da verificação da condição.

---

## ✅ Dica Rápida: Qual usar?

| Situação                                          | Estrutura indicada |
| ------------------------------------------------- | ------------------ |
| Repetição com número fixo de vezes                | `for`              |
| Repetição com condição desconhecida (testa antes) | `while`            |
| Repetição que deve acontecer ao menos uma vez     | `do...while`       |

---

