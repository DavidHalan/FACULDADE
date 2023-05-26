#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int chamahelp(){
    printf("Uso: ./bomdia [op��o]\n\n--help ou -h (documento do software);\n--version ou -v (vers�o do software);\n--pt ou -1 (idioma portugu�s);\n--en ou -2 (idioma ingl�s);\n--es ou -3 (idioma espanhol);\n--fr ou -4 (idioma franc�s);\n--it ou -5 (idioma italiano);\n--rs ou -6 (idioma russo);\n--kr ou -7 (idioma coreano);\n");
}

int versao(){
    printf("bomdia 1.0\nEste � um software gr�tis, voc� est� livre para fazer mudan�as e redistribuir-lo.\nN�O H� GARANTIA, na medida permitida por lei.\n");
}

int traducoes(int num){
    switch (num){
    case 1:
        printf("Bom dia\n");
        break;
    case 2:
        printf("Good morning\n");
        break;
    case 3:
        printf("Buen d�a\n");
        break;
    case 4:
        printf("Bonjour\n");
        break;
    case 5:
        printf("Buongiorno\n");
        break;
    case 6:
        printf("?????? ????\n");
        break;
    case 7:
        printf("?? ?????\n");
        break;
    }
}

int main(int argc, char *argv[]){
    if(argc == 1)
        printf("Nenhuma op��o encontrada!\nTente \"./bomdia --help ou -h\" para mais informa��es.\n");
    else if(argc == 2){
        if(strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0)
            chamahelp();
        else if(strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0)
            versao();
            else if(strcmp(argv[1], "--pt") == 0 || strcmp(argv[1], "-1") == 0)
                traducoes(1);
                else if(strcmp(argv[1], "--en") == 0 || strcmp(argv[1], "-2") == 0)
                    traducoes(2);
                    else if(strcmp(argv[1], "--es") == 0 || strcmp(argv[1], "-3") == 0)
                        traducoes(3);
                        else if(strcmp(argv[1], "--fr") == 0 || strcmp(argv[1], "-4") == 0)
                            traducoes(4);
                            else if(strcmp(argv[1], "--it") == 0 || strcmp(argv[1], "-5") == 0)
                                traducoes(5);
                                else if(strcmp(argv[1], "--rs") == 0 || strcmp(argv[1], "-6") == 0)
                                    traducoes(6);
                                    else if(strcmp(argv[1], "--kr") == 0 || strcmp(argv[1], "-7") == 0)
                                        traducoes(7);
                                        else   
                                            printf("Op��o n�o reconhecida \"%s\"\nTente \"./bomdia --help ou -h\"para mais informa��es.\n", argv[1]);
    }else
        printf("Op��o inv�lida \"%s\"\nTente \"./bomdia --help ou -h\" para mais informa��es.\n", argv[2]);
    return 0;
}