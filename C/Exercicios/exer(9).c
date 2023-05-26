#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano;
	printf("Digite uma data: ");
	scanf("%d %d %d", &dia, &mes, &ano);
	if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
		if (dia<=31){
			printf("Data válida!\n");
		}
	}
	else{
		if (mes==4 || mes==6 || mes==9 || mes==11){
			if (dia<=30){
				printf("Data válida!\n");
			}
		}
		else{
			if (mes==2){
				if (ano%4==0 && ano%100!=0 || ano%400==0){
					if (dia<=29 || dia<=28){
						printf("Data válida!\n");
					}
				}
				else{
				printf("Data inválida!\n");
			}
			}
			else{
				printf("Data inválida!\n");
			}
		}
    }
}
