#include <stdio.h>
#include <stdlib.h>

int main(void){

    float n1;
    float metade;
    float triplo;

    printf("Entre com um valor: ");
    scanf("%f", &n1);

metade = n1 / 2;
triplo = n1 * 3;

    if( n1 > 20 ){
        printf("A metade de %.2f e %.2f", n1, metade);
    }else{
        printf("O triplo de %.2f e %.2f", n1, triplo);
    }



    return 0;
}