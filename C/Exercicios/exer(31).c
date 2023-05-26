#include <stdio.h>

int main(){
    int mat[2][4];
    int i, j, quant=0, media=0, soma=0;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            printf(" %2d ", mat[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 4; j++){
            if(mat[i][j] >= 12 && mat[i][j] <= 20){
                quant++;
            }
            if(mat[i][j] % 2 == 0){
                soma += mat[i][j];
                media++;
            }
        }
    }
    media = soma / media;
    printf("\nQuantidade de elementos entre 12 e 20 sao: %d\n", quant);
    printf("A media dos numeros pares e: %d\n", media);
    return 0;
}