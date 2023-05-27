#include <stdio.h>
int main(){
    int idade, sup50 = 0;
    float peso, altura, med10_20, porc;
    for(int i = 1;i <= 5; i++){
        printf("Informe a idade da %dº pessoa: ", i);
        scanf("%d", &idade);
        printf("O peso e altura: ");
        scanf("%f %f", &peso, &altura);
        if(idade > 50){
            sup50++;
        }
        if(idade >= 10 && idade <= 20){
            med10_20++;
        }
        if(peso < 40){
            porc++;
        }
    }
    med10_20 = (float)med10_20/5;
    porc = (float)porc/5*100;
    printf("A quantidade de pessoas acima de 50 anos e: %d\n", sup50);
    printf("A media das alturas entre os 10 e 20 anos sao: %.2f\n", med10_20);
    printf("A porcentagem de pessoas abaixo de 40KG e: %.2f%%\n", porc);
    return 0;
}