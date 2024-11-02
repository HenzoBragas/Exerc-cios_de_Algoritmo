#include <stdio.h>

typedef struct {
	float Peso;
	int Idade;
	float Altura;
} Pessoas;

void ImprimePessoa(Pessoas P){
	printf("Idade: %d Peso: %.2f Altura: %.2f\n", P.Idade, P.Peso, P.Altura);
}
 
int main(){
	Pessoas Aluno1, Aluno2, P1, P2;
	Pessoas Pessoas[10];
	
	Aluno1.Idade = 20;
	Aluno1.Peso = 55.5;
	Aluno1.Altura = 1.55;
	
	Pessoas[0].Idade = 21;
	Pessoas[0].Peso = 75.0;
	Pessoas[0].Altura = 1.75;
	
	P2 = Pessoas[0];
	P2.Idade++;
	
	ImprimePessoa(Aluno1);
	ImprimePessoa(Pessoas[0]);
	ImprimePessoa(P2);
	
	

	return 0;
}
