#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float peso;
	printf("Digite o peso: ");
	scanf("%f", &peso);
	printf("Novo peso se engordar 15%% é: %.2f\n",peso*1.15);
	printf("Novo peso se emagrecer 20%% é: %.2f\n",peso*0.80);
}
