#include <stdio.h>
#include <math.h>
#define g 9.8
#define pi 3.1415927

int main(int argc, char const argv[])
{
    /*
    distancia ao centro do cesto
    velocidade inicial
    diametro do cesto
    alfa - angulo
    */
    float dist, velIn, diamCest, a;

    printf("\nEscreva a distancia em metros: \n");
    printf("recorde: 36 m\n");
        scanf("%f", &dist);
    printf("Escreva a velocidade inicial em m/s: \n");
    printf("limite humano: 21 m/s\n");
        scanf("%f", &velIn);
    printf("Escreva o diametro do cesto em centimetros: \n");
    printf("60 cm < diametro < 80 cm\n");
        scanf("%f", &diamCest);

    //conversao: diametro (cm) -> raio em (m)
    float var = diamCest / 200;
    printf("%f\n", var);
    float alvMin = dist - var;
    printf("%f\n", alvMin);
    float alvMax = dist + var;
    printf("%f\n", alvMax);

    //gama de valores do angulo
    float bink = alvMin * g * velIn * velIn;
    printf("%f\n", bink);
    float aMax = asin(bink) / 2;
    printf("%f\n", aMax);
    float bonk = alvMax * g * velIn * velIn;
    printf("%f\n", bonk);
    float aMin = asin(bonk) / 2;
    printf("%f\n", aMin);

    //conversao rad -> deg
    float limSup = (aMax * 180) / pi;
    float limInf = (aMin * 180) / pi;

    printf("Com os dados descritos, podera lancar a bola com um angulo entre %f e %f\n", limInf, limSup);

    return 0;
}