#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	float n1, n2, resultado;
	printf("Digite dois números: ");
	scanf("%f %f", &n1, &n2);
	printf("Escolha a operação: ");
	scanf("%d", &op);
	switch(op){
		case 1:
		resultado = (n1 + n2)/2;
		printf("A média é: %.2f\n", resultado);
		break;
		case 2:
		if(n1 > n2){
			resultado = n1 - n2;
			printf("A diferença do maior é: %.1f\n", resultado);
		} else{
			resultado = n2 - n1;
			printf("A diferença do maior é: %.1f\n", resultado);
		}
		break;
		case 3:
		resultado = n1 * n2;
		printf("O produto dos números é: %.2f\n", resultado);
		break;
		case 4:
		if(n2 != 0){
			resultado = n1 / n2;
			printf("A divisão do primeiro pelo segundo é: %.2f\n", resultado);
		} else{
			printf("O segundo número não é diferente de zero!\n");
		}
		break;
		default:
		printf("A operação digitada é inválida! Escolha entre 1 e 4!");
	}
}
