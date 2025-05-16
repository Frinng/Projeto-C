#include <stdio.h>

int main(){
    int a,b,c,d,e,f;

    printf("\n------------------------------------------\n");
    printf("\n|            Troca De Valores            |\n");
    printf("\n------------------------------------------\n");

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite um numero: ");
    scanf("%d", &b);

    printf("Digite um numero: ");
    scanf("%d", &c);

    if (a > b && a > c){
        if (b > c){
            printf("\n1- %d",a);
            printf("\n2- %d",b);
            printf("\n3- %d",c);
        }else{
            d = b;
            b = c;
            c = d;
            printf("\n1- %d",a);
            printf("\n2- %d",b);
            printf("\n3- %d",c);
        }
    }else if (b > a && b > c){
        if (a > c){
            d = b;
            b = a;
            a = d;
            printf("\n1- %d",a);
            printf("\n2- %d",b);
            printf("\n3- %d",c);
        }else{
            f = a;
            d = b;
            b = c;
            a = d;
            c = f;
            printf("\n1- %d",a);
            printf("\n2- %d",b);
            printf("\n3- %d",c);
        }
    }else{
        
    }
    


}