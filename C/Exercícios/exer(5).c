#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, unidade, dezena, centena;
	printf("Digite tr�s n�mero: ");
	scanf("%d", &n);
	unidade = n % 10;
	dezena = (n % 100)/10;
	centena = n/100;
	printf("O n�mero invertido de %d �: %d\n",n,(unidade*100+dezena*10+centena));
}
