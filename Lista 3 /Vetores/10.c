#include <stdio.h>

int main(){
    int i, n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    printf("\n Digite os elementos dos vetores: ");
    for(i = 0 ; i < n ; i++ ){
        scanf("%d", &vetor[i]);
    }
    for(i=0; i < n ; i++){
        printf("%d", vetor[i]);
    }
    return 0;
}
