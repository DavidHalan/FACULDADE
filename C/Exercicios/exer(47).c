#include <stdio.h>

int perfeito(int n){
    int i, soma=0;
    for(i = 1; i < n; i++)
        if(n % i == 0)
            soma += i;
    if(soma == n)
        return 1;
    return 0;
}

void subrotina(int v[]){
    int cont=0, i=1;
    while(cont < 3){
        if(perfeito(i)){
            v[cont] = i;
            cont++;
        }
        i++;
    }
}

int main(){
    int vet[3];
    subrotina(vet);
    for(int i = 0; i < 3; i++)
        printf("%d ", vet[i]);
    printf("\n");
    return 0;
}