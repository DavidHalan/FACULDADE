#include <stdio.h>
#include <time.h>

int main(){
    float produtos[10];
    int estoque[5][10];
    int i, j, soma, menor, maior;
    float custo;

    for(i = 0; i < 10; i++){
        produtos[i] = rand() % 10;
    }
    for(i = 0; i < 10; i++){
        printf("%2.2f ", produtos[i]);
    }
    printf("\n\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            estoque[i][j] = rand() % 100;
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            printf("%2d ", estoque[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(j = 0; j < 10; j++){
        printf("Estoques do produto %d: \n", j+1);
        for(i = 0; i < 5; i++){
            printf("Armazem %d: ", i+1);
            printf("%d\n", estoque[i][j]);
        }
        printf("\n");
    }

    for(j = 0; j < 10; j++){
        soma=0;
        printf("Estoque do produto %d totalizados: ", j+1);
        for(i = 0; i < 5; i++){
            soma += estoque[i][j];
        }
        printf("%d\n", soma);
    }
    printf("\n");

    for(i = 0; i < 5; i++){
        maior=0;
        printf("Preco do produto com maior estoque no armazem %d: R$ ", i+1);
        for(j = 0; j < 10; j++){
            if(estoque[i][j] > maior){
                maior = estoque[i][j];
            }
        }
        for(j = 0; j < 10; j++){
            if(estoque[i][j] == maior){
                printf("%.2f", produtos[j]);
            }
        }
        printf("\n");
    }
    printf("\n");

    menor = estoque[0][0];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            if(estoque[i][j] < menor){
                menor = estoque[i][j];
            }
        }
    }
    printf("Menor estoque armazenado e: %d\n\n", menor);

    for(i = 0; i < 5; i++){
        custo = 0;
        for(j = 0; j < 10; j++){
            custo += produtos[j] * estoque[i][j];
        }
        printf("Custo do armazem %d e: R$ %.2f\n", i+1, custo);
    }
    return 0;
}