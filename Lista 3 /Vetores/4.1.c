#include <stdio.h>

int main(){
    int i ;
    int vetor[8];
    for( i = 0; i < 8 ; i++ ){
        printf("Digite 8 numeros:  ");
        scanf("%d", &vetor[i]);
    }
    
    for(i = 0 ; i > 8 ; i--){
        printf("\n%d ", vetor[i]);
    }
    return 0; 
}
