#include <stdio.h>
#include <time.h>

int main(){
    int numeros[10][20];
    int somavetor[10];
    int i, j, soma;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 20; j++){
            numeros[i][j] = rand() % 3;
        }
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 20; j++){
            printf(" %4d ", numeros[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 10; i++){
        soma = 0;
        for(j = 0; j < 20; j++){
            soma+=numeros[i][j];
        }
        somavetor[i] = soma;
    }
    printf("\n");
    for(i = 0; i < 10; i++){
        printf(" %3d ", somavetor[i]);
    }
    printf("\n");
    printf("\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 20; j++){
            numeros[i][j] = somavetor[i] * numeros[i][j];
        }
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 20; j++){
            printf(" %4d ", numeros[i][j]);
        }
        printf("\n");
    }
    return 0;
}