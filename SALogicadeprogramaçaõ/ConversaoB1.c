#include <stdio.h>

int main() {
    double valorReais, cotacaoDolar, valorDolares;

    printf("Digite o valor em Reais: ");
    scanf("%lf", &valorReais);

    printf("Digite a cotação do Dólar: ");
    scanf("%lf", &cotacaoDolar);

    valorDolares = valorReais / cotacaoDolar;

    printf("O valor em Dólares é: %.2f\n", valorDolares);
}