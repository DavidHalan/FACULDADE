#include <stdio.h>

int main(){
    int mat[3][6];
    int i, j, maior=0, menor;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            printf(" %2d ", mat[i][j]);
        }
        printf("\n");
    }
    menor = mat[0][0];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            if(mat[i][j] < menor){
                menor = mat[i][j];
            }
        }
    }
    printf("\nO maior elemento da matriz e: %d\n", maior);
    printf("O menor elemento da matriz e: %d\n", menor);
    return 0;
}