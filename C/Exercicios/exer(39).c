#include <stdio.h>
#include <time.h>
#include <limits.h>

int main(){
    int mat1[4][5], mat2[5][2];
    int i, j;
    srand(time(NULL));
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            mat1[i][j] = rand() % 10;
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("%2d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 2; j++){
            mat2[i][j] = rand() % 10;
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 2; j++){
            printf("%2d ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            printf("%2d ", mat1[i][j]*mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}