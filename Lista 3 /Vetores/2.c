#include <stdio.h>

int main(){
    
    int t = 15;
    int vetor[t], i, maior, menor;
    
    for(i=0; i<t; i++){
        printf("Digite 15 numeros");
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for(i=0; i<t; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Maior = %d   Menor = %d", maior, menor);
    return 0;
}
