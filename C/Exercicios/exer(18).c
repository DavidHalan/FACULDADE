#include <stdio.h>
int main(){
    int T0=2,T1=7,T2=3,n, cont;
    printf("Digite o termo: ");
    scanf("%d", &n);
    if(n == 1){
        printf("%d", T0);
    }
    if(n == 2){
        printf("%d, %d", T0, T1);
    }
    if(n >= 3){
        printf("%d, %d, %d", T0, T1, T2);
        cont = 3;
        while(cont < n){
            cont++;
            if(cont % 3 == 1){
                T0 *= 2;
                printf(", %d", T0);
            }
            if(cont % 3 == 2){
                T1 *= 3;
                printf(", %d", T1);
            }
            if(cont % 3 == 0){
                T2 *= 4;
                printf(", %d", T2);
            }
        }
    }
}