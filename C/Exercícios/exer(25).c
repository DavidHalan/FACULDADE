#include <stdio.h>

int main(){
    int codproduto[10], estoqproduto[10], cliente, i, cod, quantia, verificar;
    for(i = 0; i < 10;i++){
        printf("Informe o codigo do %d produto: \n", i+1);
        scanf("%d", &codproduto[i]);
    }
    for(i = 0; i < 10;i++){
        printf("Informe o estoque do %d produto: \n", i+1);
        scanf("%d", &estoqproduto[i]);
    }
    for(i = 0; i < 10;i++){
        printf("Codigo do %d produto e %d e estoque: %d\n", i+1, codproduto[i], estoqproduto[i]);
    }
    printf("Codigo do cliente: \n");
    scanf("%d", &cliente);
    while (cliente != 0){
        verificar = 1;
        printf("Informe o produto que deseja comprar: \n");
        scanf("%d", &cod);
        for(i = 0; i < 10; i++){
            if(codproduto[i] == cod){
                printf("Quantidade que deseja comprar: \n");
                scanf("%d", &quantia);
                if(quantia <= estoqproduto[i]){
                    printf("Pedido atendido. Obrigado e volte sempre!\n");
                    estoqproduto[i] -= quantia;
                    printf("Codigo do cliente: \n");
                    scanf("%d", &cliente);
                } else{
                    printf("Nao temos estoque suficiente dessa mercadoria!\n");
                }
                verificar = 0;
            }
        }
        if(verificar){
            printf("Codigo inexistente!\n");
        }
    }
    for(i = 0; i < 10;i++){
        printf("Codigo do %d produto e %d e estoque atualizados: %d\n", i+1, codproduto[i], estoqproduto[i]);
    }
    return 0;
}