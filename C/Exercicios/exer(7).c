#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia1, dia2, mes1, mes2, ano1, ano2, idade1, idade2, idade3;
	printf("Digite a data do seu anivers�rio: ");
	scanf("%d %d %d", &dia1, &mes1, &ano1);
	printf("Digite a data atual: ");
	scanf("%d %d %d", &dia2, &mes2, &ano2);
	idade1 = ano2 - ano1;
	idade2 = idade1 * 365;
	idade3 = idade1 * 12;
	printf("Voc� nasceu: %d/%d/%d\n", dia1, mes1, ano1);
	printf("A data atual �: %d/%d/%d\n", dia2, mes2, ano2);
	printf("Sua idade em dias �: %d dias\n", idade2);
	printf("Sua idade em meses �: %d meses\n", idade3);
	printf("Sua idade em anos �: %d anos\n", idade1);
}
