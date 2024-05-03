#include <stdio.h>

int main()
{
    int linha, coluna, matriz[2][4];
    
    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 4 ; coluna++){
            printf("Digite valores de 0 a 100: ");
            scanf("%d",  &matriz[linha] [coluna]);
        }
    }
    
    for(linha = 0; linha < 2; linha++){
        for(coluna = 0 ; coluna < 4 ; coluna++){
            printf("%d", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0; 
}
