#include <stdio.h>

int main(){
    double km,milhas;

    printf("\n------------------------------------------\n");
    printf("\n|            Conversor Online            |\n");
    printf("\n------------------------------------------\n");

    printf("Digite o KM: ");
    scanf("%lf", &milhas);

    km = milhas / 0.6;
    printf("%.1lfmilhas e %.1lfkm ",milhas,km);
}