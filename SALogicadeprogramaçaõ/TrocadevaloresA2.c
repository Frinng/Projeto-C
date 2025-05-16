#include <stdio.h>

int main(){
    int a,b,c,d,e,f;

    printf("\n------------------------------------------\n");
    printf("\n|            Troca De Valores            |\n");
    printf("\n------------------------------------------\n");
    
    printf("\nDigite um numero: ");
    scanf("%d", &a);

    printf("\nDigite um numero: ");
    scanf("%d", &b);

    if (a > b){
        printf("\n1- %d",a);
        printf("\n2- %d",b);
    }else{
        c = b;
        b = a;
        a = c;

        printf("\n1- %d",a);
        printf("\n2- %d",b);
    }

}