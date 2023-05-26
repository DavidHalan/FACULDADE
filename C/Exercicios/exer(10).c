#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float custo, valor;
	printf("Digite o custo do carro: ");
	scanf("%f", &custo);
	if(custo<=12000){
		valor = custo + (custo * 0.05);
		printf("O valor final é: %.2f", valor);
	}
	else{
		if(custo>12000 && custo <=25000){
			valor = custo + (custo * 0.1) + (custo * 0.15);
			printf("O valor final é: %.2f", valor);
		}
		else{
			valor = custo + (custo * 0.15) + (custo * 0.20);
			printf("O valor final é: %.2f", valor);
		}
	}
	return 0;
}
