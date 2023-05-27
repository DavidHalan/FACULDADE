#include <stdio.h>
#include <stdlib.h>

int main() {
    int i; 
    float somatorio = 1, inicio = 1;

    for(i = 2; i <= 64; i++){
        inicio = inicio * 2;
        somatorio += inicio;
        printf("%d Valor: %.1f\n", i, inicio);
    }
    printf("Valor total: %.1f\n", somatorio);
    return 0;
}