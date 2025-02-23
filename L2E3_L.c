#include <stdio.h>
#include <math.h>
#define g 9.8
#define pi 3.1415927

int main(int argc, char const argv[])
{
    double ang, veloini, hteto;
    double d = 0, h = 0;
//Título
         puts("trajetoria de uma bola ate o cesto:");
//obter graus do angulo
    printf("Escreva O angulo de partida em graus: \n");
        scanf("%lf", &ang);
    printf("Escreva a altura do teto em metros: \n");
        scanf("%lf", &hteto);
    printf("Escreva a velocidade inicial do projetil: \n");
        scanf("%lf", &veloini);
// graus em radianos 

double rad = ang * (pi / 180);

//contas

d = (veloini * veloini * sin(2 * rad)) / g;

h = (veloini * veloini * sin(rad) * sin(rad)) / (2 * g);

if(hteto <= h){
    puts("O projetil atinge o teto!");
}
printf("O cesto deve estar a %.2lf metros\n", d);



    return 0;
}