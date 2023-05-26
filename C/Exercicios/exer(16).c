#include <stdio.h>
int main(){
    int votos, total=0, cadA=0, cadB=0, cadC=0, cadD=0, nulo=0, brancos=0;
    float porcnulo, porcbranco;
    printf("0 para encerrar as votacoes\n");
    printf("1 para candidato A\n");
    printf("2 para candidato B\n");
    printf("3 para candidato C\n");
    printf("4 para candidato D\n");
    printf("5 para candidato nulo\n");
    printf("6 para candidato branco\n");
    do{
        printf("Informe seu voto: \n");
        scanf("%d", &votos);
        switch (votos)
        {
        case 0:
            break;
        case 1:
            cadA++;
            total++;
            break;
        case 2:
            cadB++;
            total++;
            break;
        case 3:
            cadC++;
            total++;
            break;
        case 4:
            cadD++;
            total++;
            break;
        case 5:
            nulo++;
            total++;
            break;
        case 6:
            brancos++;
            total++;
            break;
        default:
            printf("Codigo invalido!\n");
            break;
        }
    }while(votos != 0);
    porcnulo = (float)nulo/total*100;
    porcbranco = (float)brancos/total*100;
    printf("Total de votos: %d\n", total);
    printf("Candidato A: %d\n", cadA);
    printf("Candidato B: %d\n", cadB);
    printf("Candidato C: %d\n", cadC);
    printf("Candidato D: %d\n", cadD);
    printf("Votos nulos: %d\n", nulo);
    printf("Votos em branco: %d\n", brancos);
    printf("Porcentagem de votos nulos em relacao ao total de votos: %.2f%%\n", porcnulo);
    printf("Porcentagem de votos brancos em relacao ao total de votos: %.2f%%\n", porcbranco);
    return 0;
}