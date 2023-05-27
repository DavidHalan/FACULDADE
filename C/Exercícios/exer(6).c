#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	// CT = Capacidade do tanque; QLA = Quantidade de litros abastecido; QP = Quilometragem percorrida; C = Consumo; AF = Autonomia futura
	float CT, QLA, QP, C, AF;
	printf("Digite a capacidade do tanque: ");
	scanf("%f", &CT);
	printf("Informe quantos litros foi abastecido: \n");
	scanf("%f", &QLA);
	printf("Informe a quilometragem percorrida: \n");
	scanf("%f", &QP);
	C = QP/QLA;
	AF = (CT-QLA)*C;
	printf("O consumo foi de: %.2f litros\n", C);
	printf("A autonomia futura será: %.2f litros", AF);
}
