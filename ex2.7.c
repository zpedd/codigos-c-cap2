#include <stdio.h>
#include <stdlib.h>

int main(void){

    float n1;
    float n2;
    float soma;
    float subtracao;

    printf("Entre com um numero: ");
    scanf("%f", &n1);

    printf("Entre com outro numero: ");
    scanf("%f", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;

    if( soma > 10 ){
        printf("Os numeros fornecidos foram %.2f e %.2f", n1, n2);
    }else {
        printf("A subtracao entre %.2f e %.2f e igual a %.2f", n1, n2, subtracao);
    }



    return 0;
}