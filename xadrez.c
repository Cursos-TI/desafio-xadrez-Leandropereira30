#include <stdio.h>

int main() {
    // ========================
    // Movimento da TORRE (for)
    // ========================
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // ==========================
    // Movimento do BISPO (while)
    // ==========================
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // ==============================
    // Movimento da RAINHA (do-while)
    // ==============================
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}