#include <stdio.h>

//printf("\n");
//scanf("");

int main()
{
    //PRIMEIRO VALOR
    //input
    int horasIni1, minIni1, segIni1;
    //dados conversoes
    int segDeHoras1, segDeMin1;
    //primeiro tempo total
    int segTot1;

    //SEGUNDO VALOR
    //input
    int horasIni2, minIni2, segIni2;
    //dados conversoes
    int segDeHoras2, segDeMin2;
    //segundo tempo total
    int segTot2;

    //diferenca dos dois tempos
    int difTemp;

    printf("\nInsira dois tempos, fornecendo separadamente as horas, os minutos e os segundos\n");
    printf("Calcularemos a diferença dos dois valores de tempos\n");
    printf("\nFuncionamento:\no primeiro valor tem de ser o maior e...\n");
    printf("nº horas < 23\nnº minutos < 59\nnº segundos < 59\n");

    printf("\n ==============\n");
    printf("|Primeiro tempo|\n");
    printf(" ==============\n");
    
    printf("Quantas horas?: ");
    scanf("%d\n", &horasIni1);
    if (horasIni1 > 23)
    {
        printf("quantidade invalida\n");
    }
    else
    {
        printf("Quantos minutos?: ");  
        scanf("%d\n", &minIni1);
        if (minIni1 > 59)
        {
        printf("quantidade invalida\n");
        }
        else
        {
            printf("Quantos segundos?: ");
            scanf("%d\n", &segIni1);
            if (segIni1 > 59)
            {
            printf("quantidade invalida\n");
            }
        }
    }
    
    //conversao primeiro valor
    segDeHoras1 = horasIni1 * 3600;
    segDeMin1 = minIni1 * 60;
    segTot1 = segDeHoras1 + segDeMin1 + segIni1;
    printf("O primeiro tempo total em segundos é: %d\n", segTot1);

    printf("\n ==============\n");
    printf("|Segundo tempo|\n");
    printf(" ==============\n");
    
    printf("Quantas horas?: ");
    scanf("%d\n", &horasIni2);
    if (horasIni2 > 23)
    {
        printf("quantidade invalida\n");
    }
    else
    {
        printf("Quantos minutos?: ");  
        scanf("%d\n", &minIni2);
        if (minIni2 > 59)
        {
        printf("quantidade invalida\n");
        }
        else
        {
            printf("Quantos segundos?: ");
            scanf("%d\n", &segIni2);
            if (segIni2 > 59)
            {
            printf("quantidade invalida\n");
            }
        }
    }
    
    //conversao segundo valor
    segDeHoras2 = horasIni2 * 3600;
    segDeMin2 = minIni2 * 60;
    segTot2 = segDeHoras2 + segDeMin2 + segIni2;
    printf("O segundo tempo total em segundos é: %d\n", segTot2);

    //diferenca entre ambos os tempos
    difTemp = segTot1 - segTot2;
    printf("A diferença dos dois tempos é %d\n", difTemp);

    return 0;
}