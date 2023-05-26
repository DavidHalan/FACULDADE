#include <stdio.h>

int main(){
    int vet1[10], vet2[10], vetresu[20], i, j=0;
    for(i = 0; i < 10; i++){
        printf("Digite %d numero do vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
    }
    for(i = 0; i < 10; i++){
        printf("Digite %d numero do vetor 2: ", i+1);
        scanf("%d", &vet2[i]);
    }
    for(i = 0; i < 10; i++){
        vetresu[j]= vet1[i];
        j++;
        vetresu[j]= vet2[i];
        j++;
    }
    printf("\nVetor resultante: ");
    for(i = 0; i < 20; i++){
        printf(" %d ", vetresu[i]);
    }
    return 0;
}