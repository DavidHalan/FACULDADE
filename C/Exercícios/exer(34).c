#include <stdio.h>

int main(){
    float vendas[12][4];
    float totalvendas;
    int i, j;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 4; j++){
            scanf("%f", &vendas[i][j]);
        }
    }
    printf("Relacao das vendas:\n");
    for(i = 0; i < 12; i++){
        for(j = 0; j < 4; j++){
            printf(" %7.2f ", vendas[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < 12; i++){
        totalvendas = 0;
        for(j = 0; j < 4; j++){
            totalvendas += vendas[i][j];
        }
        switch (i){
        case 0:
            printf("Em Janeiro total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 1:
            printf("Em Fevereiro total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 2:
            printf("Em Março total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 3:
            printf("Em Abril total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 4:
            printf("Em Maio total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 5:
            printf("Em Junho total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 6:
            printf("Em Julho total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 7:
            printf("Em Agosto total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 8:
            printf("Em Setembro total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 9:
            printf("Em Outubro total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 10:
            printf("Em Novembro total em vendas foram: R$%.2f\n", totalvendas);
            break;
        case 11:
            printf("Em Dezembro total em vendas foram: R$%.2f\n", totalvendas);
            break;
        }
    }
    printf("\n");
    for(j = 0; j < 4; j++){
        totalvendas = 0;
        for(i = 0; i < 12; i++){
            totalvendas += vendas[i][j];
        }
        printf("Na %d semana o total em vendas foram: R$%.2f\n", j+1, totalvendas);
    }
    totalvendas = 0;
    printf("\n");
    for(i = 0; i < 12; i++){
        for(j = 0; j < 4; j++){
            totalvendas += vendas[i][j];
        }
    }
    printf("Vendas no ano foram: R$%.2f\n", totalvendas);
    return 0;
}