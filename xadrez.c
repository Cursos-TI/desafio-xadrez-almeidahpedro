#include <stdio.h>

int main() {
    // Variáveis de controle
    int i, j;
    int torre = 0;
    int bispo = 1;
    int rainha = 1;

    // MOVIMENTO DA TORRE (5 vezes para a DIREITA usando FOR)
    printf("MOVIMENTO DA TORRE:\n");
    for (torre = 0; torre < 5; torre++) {
        printf("DIREITA\n");
    }

    // MOVIMENTO DO BISPO (5 vezes na diagonal: CIMA + DIREITA usando WHILE)
    printf("\nMOVIMENTO DO BISPO:\n");
    bispo = 1;
    while (bispo <= 5) {
        printf("CIMA\n");
        printf("DIREITA\n");
        bispo++;
    }

    // MOVIMENTO DA RAINHA (8 vezes para a ESQUERDA usando DO-WHILE)
    printf("\nMOVIMENTO DA RAINHA:\n");
    rainha = 1;
    do {
        printf("ESQUERDA\n");
        rainha++;
    } while (rainha <= 8);

    // MOVIMENTO DO CAVALO: 2 para BAIXO e 1 para ESQUERDA (com loops aninhados)
    printf("\nMOVIMENTO DO CAVALO (em L para BAIXO e ESQUERDA):\n");
    for (i = 0; i < 2; i++) {
        printf("BAIXO\n");

        j = 0;
        while (j < 1) {
            printf("ESQUERDA\n");
            j++;
        }
    }

    // MOVIMENTO DO CAVALO (em L para CIMA e DIREITA, usando break e continue)
    printf("\nMOVIMENTO DO CAVALO (em L para CIMA e DIREITA):\n");
    for (i = 0; i < 2; i++) {
        if (i == 1) {
            continue;
        }
        printf("CIMA\n");

        for (j = 0; j < 1; j++) {
            printf("DIREITA\n");
            break;
        }
    }

    // Fim
    return 0;
}
