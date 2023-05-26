#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int salario;
	printf("Digite o salario: ");
	scanf("%d", &salario);
	salario = salario * 1.25;
	printf("O salario com o ajuste de 25%% é: %d\n", salario);
	return 0;
}
