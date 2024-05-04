#include <stdio.h>

int main() {
    int matriz[2][2] = {{1, 0}, {1, 0}};
    for (int linha = 0;  linha < 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
