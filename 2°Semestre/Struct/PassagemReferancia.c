#include <stdio.h>
#define TAMANHO 50
	struct Endereco {
	char rua[TAMANHO];
	char cidade_estado_cep[TAMANHO];
};
	struct Endereco endereco1, endereco2;

int main(){
	
	printf("\n Entre rua: ");
	gets(endereco1.rua);
	printf("\n Entre cidade/estado/cep: ");
	gets(endereco1.cidade_estado_cep);
	printf("\t %s\n", endereco1.rua);
	printf("\t %s\n", endereco1.cidade_estado_cep);
	
	return 0;
}
