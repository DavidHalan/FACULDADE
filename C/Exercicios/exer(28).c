#include <stdio.h>

int main (){
    int vet[10], i, contador, posi;
    for(i = 0; i < 10; i++){
        printf("Informe o %d numero: ", i+1);
        scanf("%d", &vet[i]);
    }
    for(posi = 0; posi < 10; posi++){
        contador = 0;
        for(i = 0; i < 10; i++){
            if(vet[posi] == vet[i]){
                contador++;
            }
        }
        if(contador > 1){
            printf("O numero %d aparece %d vezes\n", vet[posi], contador);
        }
    }
    return 0;
}