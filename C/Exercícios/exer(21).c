#include <stdio.h>

int main(){
    float dez[11], somaposi = 0;
    int quantnega = 0;
    printf("Digite 10 numeros: ");
    for(int i = 0; i < 10; i++){
        scanf("%f", &dez[i]);
        if (dez[i] < 0){
            quantnega++;
        }
        if (dez[i] > 0){
            somaposi += dez[i];
        }
    }
    printf("Quantidade de numeros negativos: %d\n", quantnega);
    printf("Soma dos numeros positivos: %.2f\n", somaposi);
    return 0;
}