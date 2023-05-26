#include <stdio.h>

int main(){
    int primos[9], i, div, valor;
    for(i = 0; i < 9; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &primos[i]);
    }
    for(i = 0; i < 9; i++){
        div = 0;
        valor = 1;
        while (valor <= primos[i]){
            if(primos[i] % valor == 0){
                div++;
            }
            valor++;
        }
        if(div == 2){
            printf("O numero %d na posicao %d e primo \n", primos[i], i);
        }
    }
}