#include <stdio.h>

// Definição das classes de radiação com base na frequência
#define FREQ(f) ((f) < 3E9 ? "Rádio" : (f) < 3E12 ? "Micro-ondas" : (f) < 4.3E14 ? "Infravermelho" : (f) < 7.5E14 ? "Visível" :(f) < 3E17 ? "Ultravioleta" : (f) < 3E19 ? "Raios-X" : "Raios-Gama")

int main(){
    double frequencia;

    // verificação 
    printf("Digite a frequência em Hz: \n");
    if (scanf("%lf", &frequencia) != 1 || frequencia < 0) {
        printf("Entrada inválida. Por favor, insira um número válido de frequência.\n");
        return 1;
    }
    // print com o valor correspondente
    printf("A radiação com a frequência %.2e Hz pertence à classe: %s\n", frequencia, FREQ(frequencia));

    return 0;
}