#include <stdio.h>
int main(){
    int mat[3][3], i, j, d;
    printf("Digite um numero");
    scanf("%d", &d);
    
    for(i=0; i  < 3 ; i++){
        for(j =0 ; j < 3 ; j++){
            if(i==j)
                printf("%d ", d);
            else
                printf("+ ");
        }
        printf("\n");
    }
    return 0;
}
