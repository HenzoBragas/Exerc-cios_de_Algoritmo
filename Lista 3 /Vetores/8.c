#include <stdio.h>

int main(){
  int vetor[15],i,j,min,temp;
printf("Digite 15 elementos para vetor: ");
for(i=0 ; i <15; i++){
scanf("%d", &vet[i]);
}for(i=0; i < 14 ; i++){
min = i;
for(j=1; j <15 ; j++){
  if(vet[j]<vetor[min){
    min=j;
  }
}
  if(min != i){
    temp = vetor[i];
    vetor[i] = vetor[min]
    vetor[min] = temp;
}
}
   for(i=0 ; i <45 ; i++){
  printf("%d", vetor[i]);
   }
return 0;
  }
    
    
    
