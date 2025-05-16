#include <stdio.h>

int main() {
    double distancia, velocidade, tempo;

    printf("Digite a distância entre as cidades (em km): ");
    scanf("%lf", &distancia);

    printf("Digite a velocidade média do veículo (em km/h): ");
    scanf("%lf", &velocidade);

    tempo = distancia / velocidade;

    printf("O tempo estimado de viagem é: %.2f horas\n", tempo);
}