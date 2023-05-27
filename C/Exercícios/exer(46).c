#include <stdio.h>

void sequencia(int n){
    printf("S = 1");
    for(int i = 2; i <= n; i++){
        printf(" + 1/%d", i);
    }
}

int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    sequencia(n);
    return 0;
}