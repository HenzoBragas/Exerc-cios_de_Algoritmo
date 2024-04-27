#include <stdio.h>
int main(){
	int a, n=0;
	printf("Digite um numero:");
	scanf("%d", &a);
	while(n <= a){
		printf("%d\n", n);
		n++;
	}
	return 0;
}
