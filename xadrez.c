#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // variável de movimento

    // --- TORRE ---
    // Usa estrutura FOR

    printf("=== Movimento da TORRE ===\n");
    printf("\n");

    for (i = 1; i <= casasTorre; i++) {

        printf("Direita\n");
    }

    printf("\n");

    // --- BISPO ---
    // Usa estrutura WHILE

    printf("=== Movimento do BISPO ===\n");
    printf("\n");

    i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // --- RAINHA ---
    // Usa estrutura DO-WHILE

    printf("=== Movimento da RAINHA ===\n");
    printf("\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    printf("\n=== Fim da simulacao ===\n");

    return 0;
}
