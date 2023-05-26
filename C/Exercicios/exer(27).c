#include <stdio.h>

int main(){
    int vet[5], i, soma = 0;
    for(i = 0; i < 5; i++){
        printf("Digite o %d numero: \n", i+1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }
    printf("Os numeros digitados foram: %d ", vet[0]);
    for(i = 1; i < 5; i++){
        printf("+ %d ", vet[i]);
    }
    printf("= %d", soma);
    return 0;
}