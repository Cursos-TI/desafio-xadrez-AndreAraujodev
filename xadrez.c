#include <stdio.h>

#define TAM 8

int main() {
    int x, y;
    int opcao;
    int i;

    // Posição inicial
    printf("Linha inicial (0 a 7): ");
    scanf("%d", &x);

    printf("Coluna inicial (0 a 7): ");
    scanf("%d", &y);

    if (x < 0 || x >= TAM || y < 0 || y >= TAM) {
        printf("Posição inválida.\n");
        return 0;
    }

    // Escolha da peça
    printf("Escolha a peça:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        // Torre: 5 casas para a direita
        printf("\nMovimento da Torre (5 casas para a direita):\n");
        i = 1;
        while (i <= 5) {
            if (y + i < TAM) {
                printf("Movendo para a direita: (%d, %d)\n", x, y + i);
            }
            i++;
        }

    } else if (opcao == 2) {
        // Bispo: 5 casas na diagonal (cima e direita)
        printf("\nMovimento do Bispo (5 casas para cima e à direita):\n");
        for (i = 1; i <= 5; i++) {
            int nx = x - i;
            int ny = y + i;
            if (nx >= 0 && ny < TAM) {
                printf("Cima, Direita -> (%d, %d)\n", nx, ny);
            }
        }

    } else if (opcao == 3) {
        // Rainha: 8 casas para a esquerda
        printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
        i = 1;
        do {
            if (y - i >= 0) {
                printf("Esquerda -> (%d, %d)\n", x, y - i);
            }
            i++;
        } while (i <= 8);

    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}