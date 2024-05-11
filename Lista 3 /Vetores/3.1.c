        
#include <stdio.h>

int main()
{
    float media, vetor[20];
    printf("Digite 20 notas para tirar a media: ");
    for(int i = 0 ; i <= 20 ; i++){
        scanf("%f", &vetor[i]);
    }
    for(int i = 0 ; i <= 20 ; i++){
        media = media + vetor[i];
        media = media / 20; 
    }

    printf("A média das notas foi : %f", media);
    return 0;
}
