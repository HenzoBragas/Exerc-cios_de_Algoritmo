#include <stdio.h>

int main() {
    int vetor[10], i, par = 0;

    printf("Digite 10 elementos para o vetor:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            par++;
        }
    }
    printf("O vetor contém %d números pares.", par);

    return 0;
}
