#include <stdio.h>
int main(){
    char vinho;
    int VT = 0, VB = 0, VR = 0, total;
    float PT, PB, PR;
    do{
        printf("Informe o tipo de vinho: \n");
        scanf(" %c", &vinho);
        switch (vinho){
        case 'T':
            VT += 1;
            break;
        case 'B':
            VB += 1;
            break;
        case 'R':
            VR += 1;
            break;
        case 'F':
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (vinho != 'F');
    total = VT + VB + VR;
    if (total > 0){
        PT = (float)VT/total*100;
        PB = (float)VB/total*100;
        PR = (float)VR/total*100;
        printf("Total de vinhos: %d\n", total);
        printf("%.2f%% de vinho tinto\n", PT);
        printf("%.2f%% de vinho branco\n", PB);
        printf("%.2f%% de vinho rose\n", PR);
    }
    else{
        printf("Quantidade invalida");
    }
    return 0;
}