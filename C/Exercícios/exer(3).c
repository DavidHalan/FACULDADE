#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n, nquad, ncubo, nrquad, nrcubo;
	printf("Digite o n�mero: ");
	scanf("%f", &n);
	nquad = pow(n,2);
	ncubo = pow(n,3);
	nrquad = sqrt(n);
	nrcubo = cbrt(n);
	printf("O n�mero elevado ao quadrado �: %f\n",nquad);
	printf("O n�mero elevado ao cubo �: %f\n",ncubo);
	printf("A raiz quadrada �: %f\n",nrquad);
	printf("A raiz c�bica �: %f\n",nrcubo);
	return 0;
}
