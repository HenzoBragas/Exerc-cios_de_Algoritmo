#include <stdio.h>

int main() {
    int vetor[15], i, j, min, temp;

    printf("Digite 15 elementos para o vetor:\\n");
    for(i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }


    for(i = 0; i < 14; i++) {
        min = i;
        for(j = i + 1; j < 15; j++) {
            if(vetor[j] < vetor[min]) {
                min = j;
            }
        }
        if(min != i) {
            temp = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = temp;
        }
    }

    printf("Vetor ordenado em ordem crescente:\\n");
    for(i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\\n");

    return 0;
}