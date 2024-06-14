#include <stdio.h>
#include <stdlib.h>

int main(void){

float alfa;
float beta;
float gama;


printf("alfa: ");
scanf("%f", &alfa);

printf("beta: ");
scanf("%f", &beta);

printf("gama: ");
scanf("%f", &gama);

if(alfa+beta+gama == 180){
//verifica tipo de angulo
if(alfa == 90 || beta== 90 || gama==90 ){
    printf("Triangulo RETANGULO");
}else if(alfa > 90 || beta > 90 || gama > 90){
    printf("Triangulo OBTUSANGULO");
}else{
    printf("Triangulo ACUTANGULO");
}
}else{
    printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
}
















return 0 ;
}