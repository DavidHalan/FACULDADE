#include <stdio.h>
#include <math.h>

float Volume(float raio){
    float v = (4/3) * (pow(raio,3));
    return v;
}

int main(){
    float Raio, Resultado;

    printf("Digite o raio de uma esfera para calcular o seu volume:");
    scanf("%f",&Raio);

    Resultado = Volume(Raio);
    printf("%.3f\n",Resultado);

    return 0;
}