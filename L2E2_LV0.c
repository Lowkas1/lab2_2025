#include <stdio.h>

int main(int argc, char const argv[])
{
    int horas, minutos, segundos, total_s1 = 0, total_s2 = 0, r_segundos = 0;
    for (int i = 0; i < 2; i++)
    {
        printf("Digite o numero de horas: \n");
            while(1)
            {
                if (scanf("%d", &horas) == 1 && horas <= 23 && horas >= 0)
                {
                 break;
                }
                printf("\n Entrada Inválida! Digite um valor de horas válido \n");
                while (getchar() != '\n');
            }
        printf("Digite o numero de minutos: \n");
        while(1)
            {
            if (scanf("%d", &minutos) == 1 && minutos <= 59 && minutos >= 0)
            {
             break;
            }
            printf("\n Entrada Inválida! Digite um valor de minutos válido \n");
            while (getchar() != '\n');
            }
        printf("Digite o numero de segundos: \n");
        while(1)
        {
            if (scanf("%d", &segundos) == 1 && segundos <= 59 && segundos >= 0)
            {
             break;
            }
            printf("\n Entrada Inválida! Digite um valor de segundos válido \n");
            while (getchar() != '\n');
        }
        horas = horas * 3600;
        minutos = minutos * 60;
        if (i = 0)
        {
            total_s1 = horas + minutos + segundos;
        }
        else
        {
            total_s2 = horas + minutos + segundos;
            if (total_s2 > total_s1)
            {
                printf("o primeiro horario não é maior que o segundo!\n");
                return 0;
            }
            total_s1 = total_s1 - total_s2;
            horas = total_s1 / 3600; 
            minutos = (total_s1 % 3600) / 60;
            segundos = total_s1 % 60;
        }
    }
    printf("a diferença de horario é: %d:%d:%d", horas, minutos, segundos);
    return 0;
}
