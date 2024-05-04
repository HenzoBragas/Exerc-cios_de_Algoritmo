#include <stdio.h>

int main()
{
    int linha, coluna, matriz[2][2] =  {{1, 1}, {1, 1}};
    

    for(linha = 0; linha < 2 ; linha++){
        for(coluna = 1; coluna < 2 ; coluna++){
            printf("%d ", matriz[linha][coluna]); 
        }
    }
   
    printf("\n");

    for(linha = 0; linha < 2 ; linha++){
        for(coluna = 1; coluna < 2 ; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
    }
   
    return 0; 
}
