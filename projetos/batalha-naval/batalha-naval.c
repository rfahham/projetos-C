#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define TAM 10
#define NUM_NAVIOS 5

typedef struct {
    int x[5];
    int y[5];
    int tamanho;
    int afundado;
} Navio;

// Inicializa o tabuleiro com '0'
void inicializarTabuleiro(char tab[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tab[i][j] = '0';
}

// Imprime o tabuleiro
void imprimirTabuleiro(char tab[TAM][TAM], int revelarNavios) {
    printf("  ");
    for (int j = 1; j <= TAM; j++) printf("%2d", j);
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%c ", 'A' + i);
        for (int j = 0; j < TAM; j++) {
            if (tab[i][j] == 'N' && !revelarNavios)
                printf(" 0");
            else
                printf(" %c", tab[i][j]);
        }
        printf("\n");
    }
}

// Posiciona navios de forma aleatória
void posicionarNavio(char tab[TAM][TAM], Navio *navio, int tamanho) {
    int horizontal = rand() % 2;
    int x, y;
    int valido;

    do {
        valido = 1;
        if (horizontal) {
            x = rand() % TAM;
            y = rand() % (TAM - tamanho + 1);
            for (int i = 0; i < tamanho; i++)
                if (tab[x][y + i] == 'N') valido = 0;
        } else {
            x = rand() % (TAM - tamanho + 1);
            y = rand() % TAM;
            for (int i = 0; i < tamanho; i++)
                if (tab[x + i][y] == 'N') valido = 0;
        }
    } while (!valido);

    for (int i = 0; i < tamanho; i++) {
        if (horizontal) {
            tab[x][y + i] = 'N';
            navio->x[i] = x;
            navio->y[i] = y + i;
        } else {
            tab[x + i][y] = 'N';
            navio->x[i] = x + i;
            navio->y[i] = y;
        }
    }
    navio->tamanho = tamanho;
    navio->afundado = 0;
}

// Verifica se o navio foi afundado
int navioAfundado(Navio *navio, char tab[TAM][TAM]) {
    for (int i = 0; i < navio->tamanho; i++)
        if (tab[navio->x[i]][navio->y[i]] != 'X')
            return 0;
    navio->afundado = 1;
    return 1;
}

// Função de ataque
void atacar(char tab[TAM][TAM], Navio navios[], int x, int y) {
    if (tab[x][y] == 'N') {
        printf("Acertou um navio!\n");
        tab[x][y] = 'X';
        for (int i = 0; i < NUM_NAVIOS; i++)
            if (!navios[i].afundado)
                if (navioAfundado(&navios[i], tab))
                    printf("Você afundou um navio de tamanho %d!\n", navios[i].tamanho);
    } else if (tab[x][y] == '0') {
        printf("Água!\n");
        tab[x][y] = 'O';
    } else {
        printf("Posição já atacada!\n");
    }
}

int todosAfundados(Navio navios[]) {
    for (int i = 0; i < NUM_NAVIOS; i++)
        if (!navios[i].afundado)
            return 0;
    return 1;
}

int main() {
    char jogador[TAM][TAM];      // Tabuleiro do jogador (ataques)
    char computador[TAM][TAM];   // Tabuleiro do computador (navios)
    Navio navios[NUM_NAVIOS];
    int tamanhos[NUM_NAVIOS] = {5, 4, 3, 3, 2}; // tamanhos clássicos

    srand(time(NULL));
    inicializarTabuleiro(jogador);
    inicializarTabuleiro(computador);

    for (int i = 0; i < NUM_NAVIOS; i++)
        posicionarNavio(computador, &navios[i], tamanhos[i]);

    printf("Bem-vindo à Batalha Naval!\n");

    while (!todosAfundados(navios)) {
        printf("\nSeu tabuleiro de ataque:\n");
        imprimirTabuleiro(jogador, 1);

        char linhaChar;
        int coluna;
        printf("Digite a linha (A-J) e a coluna (1-10) para atacar: ");
        scanf(" %c %d", &linhaChar, &coluna);

        int linha = toupper(linhaChar) - 'A';
        coluna = coluna - 1;

        if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM) {
            printf("Posição inválida!\n");
            continue;
        }

        atacar(computador, navios, linha, coluna);
        // Atualiza o tabuleiro do jogador com o resultado
        jogador[linha][coluna] = computador[linha][coluna];
    }

    printf("\nParabéns! Você afundou todos os navios!\n");
    printf("Tabuleiro final do computador:\n");
    imprimirTabuleiro(computador, 1);

    return 0;
}
