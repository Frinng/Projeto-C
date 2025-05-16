#include <stdio.h>

int main(){
    double km,milhas;

    printf("\n------------------------------------------\n");
    printf("\n|            Conversor Online            |\n");
    printf("\n------------------------------------------\n");

    printf("Digite o KM: ");
    scanf("%lf", &km);

    milhas = km * 0.6;
    printf("%.1lf km em milhas e %.1lf milhas ",km,milhas);
}