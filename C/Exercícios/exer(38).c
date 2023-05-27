#include <stdio.h>
#include <time.h>
#include <limits.h>

int main(){
    int mat[6][4], mat2[6][4];
    int i, j, v, menor;
    srand(time(NULL));
    for(i= 0; i < 6; i++){
        for(j = 0; j < 4; j++){
            mat[i][j] = rand() % 11;
        }
    }
    for(i= 0; i < 6; i++){
        for(j = 0; j < 4; j++){
            printf(" %2d ", mat[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 6; i++){
        menor = mat[0][0];
        for(j = 0; j < 4; j++){
            for(v = 0; v < 4; v++){
                if(mat[i][v] < menor){
                    menor = mat[i][v];
                }
            }
            mat2[i][j] = menor * mat[i][j];
        }
    }
    printf("\nMatriz resultante:\n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 4; j++){
            printf("%4d ", mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}