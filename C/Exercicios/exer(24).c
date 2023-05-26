#include <stdio.h>

int main(){
    int vet[7], i;
    for(i = 0; i < 7; i++){
        printf("Informe o %d numero: \n", i+1);
        scanf("%d", &vet[i]);
    }
    printf("\nOs numeros multiplos de 2 sao: ");
    for(i = 0; i < 7; i++){
        if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
        }
    }
    printf("\nOs numeros multiplos de 3 sao: ");
    for(i = 0; i < 7; i++){
        if(vet[i] % 3 == 0){
            printf("%d ", vet[i]);
        }
    }
    printf("\nOs numeros multiplos de 2 e 3 sao: ");
    for(i = 0; i < 7; i++){
        if(vet[i] % 2 == 0 && vet[i] % 3 == 0){
            printf("%d ", vet[i]);
        }
    }
    return 0;
}