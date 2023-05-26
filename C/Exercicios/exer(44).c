#include <stdio.h>

void primo (int n){
    int div, valor, i;
    i = n + 1;
    while(i >= n){
        div = 0;
        valor = 1;
        while (valor <= i){
            if(i % valor == 0)
                div++;
            valor++;
        }
        if(div == 2){
            printf("O numero primo maior que %d e: %d\n", n, i);
            break;
        }
        i++;
    }
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    primo(num);
    return 0;
}