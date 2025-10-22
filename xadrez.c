#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça (definido diretamente no código)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do cavalo: 2 casas para baixo, 1 para esquerda
    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;

    int i, j; // variáveis de controle dos loops

    // --- TORRE ---
    // Usa estrutura FOR
    printf("=== Movimento da TORRE ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // --- BISPO ---
    // Usa estrutura WHILE
    printf("=== Movimento do BISPO ===\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // --- RAINHA ---
    // Usa estrutura DO-WHILE
    printf("=== Movimento da RAINHA ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    printf("\n");

    // --- CAVALO ---
    // Usa loops ANINHADOS (For e While)
    printf("=== Movimento do CAVALO ===\n");

    // O cavalo se move em "L": 2 para cima + 1 para a direita
    // Primeiro loop (for): movimento para cima
    for (i = 1; i <= casasCimaCavalo; i++) {
        printf("Cima\n");
    }

    // Segundo loop (while): movimento para a direita
    j = 1;
    while (j <= casasDireitaCavalo) {
        printf("Direita\n");
        j++;
    }

    printf("\n=== Fim da simulacao ===\n");

    return 0;
}
