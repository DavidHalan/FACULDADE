#include <stdio.h>

int fatorial(int n){
    int i, fat=1;
        if(n == 0 || n == 1)
            return 1;
        for(i = 1; i <= n; i++)
            fat *= i;
        return fat;
}

void subrotina(int v[], int vf[]){
    for(int i = 0; i < 10; i++)
        vf[i] = fatorial(v[i]);
}

int main(){
    int v[10], vf[10], i;
    for(i = 0; i < 10; i++)
        scanf("%d", &v[i]);
    subrotina(v, vf);
    for(i = 0; i < 10; i++)
        printf("%d ", vf[i]);
    printf("\n");
    return 0;
}