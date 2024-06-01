#include <stdio.h>

int main() {
    int matriz[3][3];
    int somaColunas[3] = {0};

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);

    for (int j = 0; j < 3; j++)
        for (int i = 0; i < 3; i++)
            somaColunas[j] += matriz[i][j];

    printf("\nSoma das colunas:\n");
    for (int j = 0; j < 3; j++)
        printf("Coluna %d: %d\n", j + 1, somaColunas[j]);

    return 0;
}
