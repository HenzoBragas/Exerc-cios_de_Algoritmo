
#include <stdio.h>
int main(){
        int t = 5;
        int vet[t];
        int i, maior = 0, menor = 0;
        
        for(i=0 ; i < t; i++){
            printf("Digite o número:");
            scanf("%d", &vet[i]);
            if(i ==0 ){
                menor = maior = vet[i];
            }
            if(vet[i]> maior){
                maior = vet[i];
        }
        if(vet[i]< menor){
                menor = vet[i];
            }
            
        }
         printf("O maior é =%d, O menor  =%d", maior, menor);
    return 0 ;
}
