#include <stdio.h>

int main() {
    int matriz[3][3];
    int zeros = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            zeros += (matriz[i][j] == 0); 
        }

    printf("A matriz contém %d zeros.\n", zeros);
    return 0;
}
