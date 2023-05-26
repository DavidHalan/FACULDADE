#include <stdio.h>

int main(){
    int vet[10], verif, vf;
    printf("Digite 10 numeros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
    printf("Digite 5 numeros:");
    for(int a = 0; a < 5; a++){
        vf = 1;
        scanf("%d", &verif);
        for(int b = 0; b < 10; b++){
            if(verif == vet[b]){
                printf("%d existe no vetor!\n", verif);
                vf = 0;
            }
        }
        if(vf){
            printf("%d nao existe no vetor!\n", verif);
        }
    }
    return 0;
}