#include <stdio.h>
int main(){
    int n, menor = 9999999999999, maior = 0;
    do{
        printf("Digite um número: ");
        scanf("%d", &n);
        if(n > maior){
            maior = n;
        }
        if(n <= menor && n > 0){
            menor = n;
        }
    } while(n > 0);
    printf("Maior numero recebido: %d\n", maior);
    printf("Menor numero recebido: %d\n", menor);
    return 0;
}