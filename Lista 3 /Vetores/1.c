#include <stdio.h>

int main(){
    int i ;
    int vetor[10];
    for( i = 0; i < 10 ; i++ ){
        printf("Digite 10 numeros");
        scanf("%d", &vetor[i]);
    }
    
    for(i = 0 ; i < 10 ; i++){
        printf("%d ", vetor[i]);
    }
    return 0; 
}
