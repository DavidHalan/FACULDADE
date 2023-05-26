#include <stdio.h>

void calculo(float n1, char sinal, float n2){
    switch(sinal){
        case '+':
            printf("%.2f\n", n1 + n2);
            break;
        case '-':
            printf("%.2f\n", n1 - n2);
            break;
        case '*':
            printf("%.2f\n", n1 * n2);
            break;
        case '/':
            if(n2 != 0)
                printf("%.2f\n", n1 / n2);
            else
                printf("Nao existe divisao por 0\n");
                break;
    }
}

int main(){
    float n1, n2;
    char sinal;
    printf("Digite o 1 numero: ");
    scanf("%f", &n1);
    printf("Operador: ");
    scanf(" %c", &sinal);
    printf("Digite o 2 numero: ");
    scanf("%f", &n2);
    calculo(n1, sinal, n2);
    return 0;
}