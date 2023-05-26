#include <stdio.h>
int main(){
    int num, valor, div = 0, primo = 0;
    for (int i = 1; i <= 10;i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);
        for(valor = 1; valor <= num; valor++){
            if(num % valor == 0){
                div++;
            }
        }
        if(div == 2){
            primo++;
        }
        div = 0;
    }
    printf("A quantidade de numeros primos e: %d", primo);
    return 0;
}