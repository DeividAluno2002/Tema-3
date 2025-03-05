#include <stdio.h>

int main() {
    // Definindo as variáveis para o número de casas a serem movidas
    int casas_para_baixo = 2;
    int casas_para_esquerda = 1;

    // Movimentação do Cavalo - Começo do movimento
    printf("\nMovimento do Cavalo:\n");

    // Loop para movimentar duas casas para baixo
    for (int i = 0; i < casas_para_baixo; i++) {
        printf("Baixo\n"); // Movimento para baixo
    }

    // Loop para movimentar uma casa para a esquerda
    int i = 0;
    while (i < casas_para_esquerda) {
        printf("Esquerda\n"); // Movimento para a esquerda
        i++; // Incrementa para garantir que o loop termine após uma casa
    }

    return 0;
}
