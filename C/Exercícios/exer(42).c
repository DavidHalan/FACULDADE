#include <stdio.h>

void maior_menor(){
    int maior = 0, menor = 0;
    int n;

    scanf("%d",&n);
    maior = n;
    menor = n;

    for(int i=0; i < 4; i++){
        scanf("%d",&n);
        if (n > maior)
            maior = n;
        if (menor > n)
            menor = n;
    }

    printf("maior: %d\n",maior);
    printf("menor: %d\n",menor);
}

int main(){
    maior_menor();
    return 0;
}