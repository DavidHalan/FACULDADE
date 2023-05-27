#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n, nquad, ncubo, nrquad, nrcubo;
	printf("Digite o número: ");
	scanf("%f", &n);
	nquad = pow(n,2);
	ncubo = pow(n,3);
	nrquad = sqrt(n);
	nrcubo = cbrt(n);
	printf("O número elevado ao quadrado é: %f\n",nquad);
	printf("O número elevado ao cubo é: %f\n",ncubo);
	printf("A raiz quadrada é: %f\n",nrquad);
	printf("A raiz cúbica é: %f\n",nrcubo);
	return 0;
}
