#include <stdio.h>

int main(){
    int mat[5][5];
    int i, j, soma=0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf(" %2d ", mat[i][j]);
        }
        printf("\n");
    }
    for(j = 0; j < 5; j++){
        soma += mat[3][j];
    }
    printf("\nA soma dos elementos da linha 4 e: %d\n", soma);
    soma = 0;
    for(i = 0; i < 5; i++){
        soma += mat[i][1];
    }
    printf("A soma dos elementos da coluna 2 e: %d\n", soma);
    soma = 0;
    for(i = 0; i < 5; i++){
        soma += mat[i][i];
    }
    printf("A soma dos elementos da diagonal principal e: %d\n", soma);
    soma = 0;
    for(i = 0; i < 5; i++){
        soma += mat[i][5 - 1 - i];
    }
    printf("A soma dos elementos da diagonal secundaria e: %d\n", soma);
    soma = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            soma += mat[i][j];
        }
    }
    printf("A soma dos elementos da matriz e: %d\n", soma);
    return 0;
}