#include <stdio.h>

void tabuada(int numero){
    if (numero <= 9 && numero > 0){
        for(int i = 1; i <= numero; i++){
            printf("%d ", i);
            for (int j = 1; j < i; j++)
                printf("%d ",i * (j + 1));
            printf("\n");
        }
    }
    else
        printf("numero invalido");
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    tabuada(n);
    return 0;
}