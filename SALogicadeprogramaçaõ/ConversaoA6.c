#include <stdio.h>

int main() {
    double consumo, valorConta, custoKWh = 0.54;

    printf("Digite o total de energia consumida (em kWh): ");
    scanf("%lf", &consumo);

    valorConta = consumo * custoKWh;

    printf("O valor da conta de energia é: R$ %.2f\n", valorConta);
}
