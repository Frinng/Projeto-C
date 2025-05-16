#include <stdio.h>

int main() {
    char cidadeOrigem[100], cidadeDestino[100];
    double distancia, velocidade, tempo;

    printf("Digite o nome da cidade de origem: ");
    fgets(cidadeOrigem, sizeof(cidadeOrigem), stdin);

    printf("Digite o nome da cidade de destino: ");
    fgets(cidadeDestino, sizeof(cidadeDestino), stdin);

    printf("Digite a distância entre as cidades (em km): ");
    scanf("%lf", &distancia);

    printf("Digite a velocidade média do veículo (em km/h): ");
    scanf("%lf", &velocidade);

    tempo = distancia / velocidade;

    printf("O tempo para viajar de %s a %s a %.2f KM/h é de %.2f horas\n", cidadeOrigem, cidadeDestino, velocidade, tempo);
}
