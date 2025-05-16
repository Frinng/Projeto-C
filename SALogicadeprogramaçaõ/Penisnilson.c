#include <stdio.h>

int main(){
    int a,b,c,d;

    printf("\n------------------------------------------\n");
    printf("\n|            Troca De Valores            |\n");
    printf("\n------------------------------------------\n");

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite um numero: ");
    scanf("%d", &b);


    if (a > b){
        printf("1- %d",a);
        printf("2- %d",b);

    }else if (b > a){
        c = a;
        a = b;
        b = c;
        printf("1- %d",a);
        printf("2- %d",b);
    }

}