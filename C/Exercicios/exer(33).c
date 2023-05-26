#include <stdio.h>
#include <time.h>
#include <limits.h>

int main(){
    float notas[15][5];
    char alunos[15][20];
    int i, j;
    float media;
    srand(time(NULL));

    for(i = 0; i < 15; i++){
        for(j = 0; j < 5; j++){
            notas[i][j] = rand() % 11;
        }
    }

    for(i = 0; i < 15; i++){
        printf("Digite o nome do %d aluno: ", i+1);
        scanf("%s", alunos[i]);
    }
    printf("\n");

    for(i = 0; i < 15; i++){
        printf("Aluno %s: ", alunos[i]);
        for(j = 0; j < 5; j++){
            printf("%2.2f ", notas[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 15; i++){
        media = 0.0;
        printf("Aluno %s: ", alunos[i]);
        for(j = 0; j < 5; j++){
            media += notas[i][j];
        }
        media /= 5;
        printf("Media: %.2f", media);
        if(media >= 7){
            printf("(Aprovado)");
        } else{
            if(media < 7 && media >= 4){
                printf("(Exame)");
            } else{
                printf("(Reprovado)");
            }
        }
        printf("\n");
    }
    printf("\n");
    media = 0.0;
    for(i = 0; i < 15; i++){
        for(j = 0; j < 5; j++){
            media += notas[i][j];
        }
    }
    media /= 75;
    printf("Media da classe: %.2f", media);
    return 0;
}