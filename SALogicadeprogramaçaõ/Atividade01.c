#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1;
    int n2;
    int result;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    printf("Digite um segundo numero: ");
    scanf("%i", &n2);

    result = n1 * n2;

    printf("O resultado e %i", result);
    return 0;
}