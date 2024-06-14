#include <stdio.h>
#include <stdlib.h>

int main(void){

int lados;
float medidalado;
float perimetro;
float area;

printf("Entre com a quantidade de lados: ");
scanf("%d", &lados);
printf("Entre com a medida do lado: ");
scanf("%f", &medidalado);

perimetro = medidalado + medidalado + medidalado;
area = medidalado * medidalado;

if(lados == 3){
    printf("TRIANGULO de perimetro %.2f", perimetro);
}else if( lados == 4){
    printf("QUADRADO de area %.2f", area);
}else if( lados == 5){
    printf("PENTAGONO");
}else if( lados != 3 && lados != 4 && lados !=5){
    printf("Poligono nao identificado");
}



return 0;
}