#include <stdio.h>

int main() {
    int A[10], B[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um número para A[%d]: ", i);
        scanf("%d", &A[i]);
    }


    for (i = 0; i < 10; i++) {
        B[i] = A[i];
    }

 
    printf("\nVetor B:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
