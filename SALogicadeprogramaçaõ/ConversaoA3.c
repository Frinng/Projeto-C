#include <stdio.h>
#include <math.h>

int main(){
    double lado, base, alt, area;

    printf("\n------------------------------------------\n");
    printf("\n|            Conversor Online            |\n");
    printf("\n------------------------------------------\n");

    printf("Digite o valor do primeiro lado: ");
    scanf("%lf", &lado);

    printf("Digite o valor do segundo lado: ");
    scanf("%lf", &base);

    alt = sqrt(pow(lado, 2) - pow(base / 2, 2));

    area = (base * alt) / 2;

    printf("A altura do triângulo e: %.2f cm\n", alt);
    printf("A área do triângulo e: %.2f cm²\n", area);
}