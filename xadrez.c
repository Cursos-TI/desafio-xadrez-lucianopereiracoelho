#include <stdio.h>

int main() {

    // --- BISPO: 5 casas na diagonal para a direita ---
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Bispo -> Diagonal Direita\n");
    }

    printf("\n");

    // --- RAINHA: 8 casas para a esquerda ---
    printf("Movimento da Rainha:\n");
    for (int i = 0; i < 8; i++) {
        printf("Rainha -> Esquerda\n");
    }

    printf("\n");

    // --- TORRE: 5 casas para frente ---
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Torre -> Frente\n");
    }

    return 0;
}
