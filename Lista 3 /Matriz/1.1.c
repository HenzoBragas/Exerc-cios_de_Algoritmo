#include <stdio.h>

int main()
{
    int linha, coluna, matriz[3][3];
    
    for(linha = 0 ; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Digite valores de 0 a 100:");
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    for(linha = 0; linha < 3 ; linha++){
        for(coluna = 0; coluna < 3 ; coluna++){
            printf("%d\n", matriz[linha][coluna]);
        }
        printf("\n");
    }
   
    return 0; 
}
