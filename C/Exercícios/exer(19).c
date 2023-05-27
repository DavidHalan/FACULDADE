#include <stdio.h>
int main(){
    float Hanacleto = 1.50, Hfelisberto = 1.10;
    int anos = 0;
    do{
        Hanacleto += 0.02;
        Hfelisberto += 0.03;
        anos++;
    }while(Hanacleto > Hfelisberto);
    printf("Felisberto sera maior que Anacleto em %d anos", anos);
}