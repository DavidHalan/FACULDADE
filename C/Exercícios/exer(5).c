#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, unidade, dezena, centena;
	printf("Digite três número: ");
	scanf("%d", &n);
	unidade = n % 10;
	dezena = (n % 100)/10;
	centena = n/100;
	printf("O número invertido de %d é: %d\n",n,(unidade*100+dezena*10+centena));
}
