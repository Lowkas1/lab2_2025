#include <stdio.h>

int main() {
    double num;
    int n; 
    double valor = 1.0;
    double ajusto;
    double resultado;

    // Entrada do número a ser arredondado
    printf("Escreva o número que deseja arredondar: \n");
    while (1) {
        if (scanf("%lf", &num) == 1) {
            break;
        }
        printf("\nEntrada Inválida! Digite um valor válido: \n");
        while (getchar() != '\n'); // Limpa o buffer do teclado
    }

    // Entrada da precisão (n casas decimais)
    printf("Escreva a n-ésima casa decimal que deseja arredondar: ");
    while (1) {
        if (scanf("%d", &n) == 1) {
            break;
        }
        printf("\nEntrada Inválida! Digite um valor válido: \n");
        while (getchar() != '\n'); // Limpa o buffer do teclado
    }

    // Calcula 10^n
    for (int i = 0; i < n; i++) {
        valor *= 10;
    }
    
    ajusto = 1.0 / valor; // Define 10^(-n)
    
    // Aplica o arredondamento
    resultado = (num * valor) + 0.5 + ajusto;
    resultado = (int)resultado;  // Trunca para inteiro
    resultado = resultado / valor; // Restaura o valor para a escala correta

    // Exibe o resultado com a precisão escolhida
    printf("Arredondado para %d casa(s) decimal(is): %.*f\n", n, n, resultado);
    
    return 0;
}
