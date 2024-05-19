#include <stdio.h>

int main(){
  int n,i;
int vetor[n];
printf("Digite o tamanho do vetor:");
scanf("%d", &n);
printf("Digite os elementos do vetor: ");
for(i = 0 ; i < n ; i++){
  scanf("%d", &vetor[i]);
}
printf("O vetor em ordem inversa : \n");
for(i =n-1 ; i > 0; i--){
  printf("%d", vetor[i]);
}
return 0;
}
