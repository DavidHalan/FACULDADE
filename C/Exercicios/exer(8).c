#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	float n1, n2, resultado;
	printf("Digite dois n�meros: ");
	scanf("%f %f", &n1, &n2);
	printf("Escolha a opera��o: ");
	scanf("%d", &op);
	switch(op){
		case 1:
		resultado = (n1 + n2)/2;
		printf("A m�dia �: %.2f\n", resultado);
		break;
		case 2:
		if(n1 > n2){
			resultado = n1 - n2;
			printf("A diferen�a do maior �: %.1f\n", resultado);
		} else{
			resultado = n2 - n1;
			printf("A diferen�a do maior �: %.1f\n", resultado);
		}
		break;
		case 3:
		resultado = n1 * n2;
		printf("O produto dos n�meros �: %.2f\n", resultado);
		break;
		case 4:
		if(n2 != 0){
			resultado = n1 / n2;
			printf("A divis�o do primeiro pelo segundo �: %.2f\n", resultado);
		} else{
			printf("O segundo n�mero n�o � diferente de zero!\n");
		}
		break;
		default:
		printf("A opera��o digitada � inv�lida! Escolha entre 1 e 4!");
	}
}
