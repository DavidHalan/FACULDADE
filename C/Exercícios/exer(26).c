#include <stdio.h>

int main () {
    int vet[10], par[10], impar[10];
    int nPar = 0, nImpar = 0, i;
    for(i = 0 ; i < 10; i++){
        printf("Inserir numero %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i = 0 ; i < 10; i++){
        if(vet[i] % 2 == 0){
            par[nPar] = vet[i];
            nPar++;
        } else{
            impar[nImpar] = vet[i];
            nImpar++;
        }
    }
    printf("\nNumeros pares: ");
    for(i = 0; i < nPar; i++){
        printf(" %d ", par[i]);
    }
    printf("\nNumeros impares: ");
    for(i = 0 ;i < nImpar; i++){
        printf(" %d ", impar[i]);
    }
    return 0;
}