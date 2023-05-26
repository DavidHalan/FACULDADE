#include <stdio.h>
int main(){
    int num, valor, div = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num > 1){
        for(valor = 1;valor <= num; valor++){
            if(num % valor == 0){
                div++;
            }
        }
        if(div == 2){
            printf("O numero e primo!");
        } else{
            printf("O numero nao e primo!");
        }
    } else{
        printf("O numero digitado deve ser maior que 1!");
    }
    return 0;
}