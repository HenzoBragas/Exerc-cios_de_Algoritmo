=#include <stdio.h>


int matrizesIguais(int matriz1[2][2], int matriz2[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (matriz1[i][j] != matriz2[i][j]) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int matriz1[2][2], matriz2[2][2];

 
    printf("Digite os elementos da primeira matriz (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    if (matrizesIguais(matriz1, matriz2)) {
        printf("As matrizes são iguais.\n");
    } else {
        printf("As matrizes não são iguais.\n");
    }

    return 0;
}
