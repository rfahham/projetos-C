# Estrutura de decisão

Em C, estruturas de **condição** são usadas para executar diferentes blocos de código dependendo de certas condições lógicas. As principais estruturas de condição em C são:

---

## 1. **`if`**

Executa um bloco de código se uma condição for verdadeira.

```c
if (condição) {
    // Código a ser executado se a condição for verdadeira
}
```

### Exemplo:

```c
int x = 10;
if (x > 5) {
    printf("x é maior que 5\n");
}
```

---

## 2. **`if...else`**

Permite executar um bloco se a condição for verdadeira, e outro se for falsa.

```c
if (condição) {
    // Código se verdadeiro
} else {
    // Código se falso
}
```

### Exemplo:

```c
int x = 3;
if (x > 5) {
    printf("x é maior que 5\n");
} else {
    printf("x é menor ou igual a 5\n");
}
```

---

## 3. **`if...else if...else`**

Permite testar várias condições em sequência.

```c
if (condição1) {
    // Código se condição1 for verdadeira
} else if (condição2) {
    // Código se condição2 for verdadeira
} else {
    // Código se nenhuma condição for verdadeira
}
```

### Exemplo:

```c
int x = 5;
if (x > 10) {
    printf("Maior que 10\n");
} else if (x == 5) {
    printf("Igual a 5\n");
} else {
    printf("Outro valor\n");
}
```

---

## 4. **`switch`**

Usado para comparar uma variável com vários valores possíveis (mais organizado que vários `if...else if` em alguns casos).

```c
switch (variável) {
    case valor1:
        // Código para valor1
        break;
    case valor2:
        // Código para valor2
        break;
    default:
        // Código se nenhum dos valores anteriores for igual
}
```

### Exemplo:

```c
int dia = 3;
switch (dia) {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    default:
        printf("Outro dia\n");
}
```

---
