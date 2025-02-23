#include <stdio.h>

int main()
{
    int segundos, horas, r_horas, minutos, r_segundos;

    printf("Escreva os segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    r_segundos = segundos % 60;

    printf("Horas: %d \n", horas);
    printf("minutos: %d \n", minutos);
    printf("segundos: %d \n", r_segundos);

    return 0;
}