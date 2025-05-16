#include <stdio.h>

int main() {
    double valorDolares, cotacaoDolar, valorReais;

    printf("Digite o valor em Dólares: ");
    scanf("%lf", &valorDolares);

    printf("Digite a cotação do Dólar: ");
    scanf("%lf", &cotacaoDolar);

    valorReais = valorDolares * cotacaoDolar;

    printf("O valor em Reais é: %.2f\n", valorReais);
}