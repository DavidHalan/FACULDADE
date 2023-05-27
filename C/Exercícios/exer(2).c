#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float area, raio, pi;
	pi = 3.14;
	printf("Digite o raio: ");
	scanf("%f", &raio);
	area = raio * 2 * pi;
	printf("A área do círculo é: %f\n", area);
	return 0;
}

