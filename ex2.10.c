#include <stdio.h>
#include <stdlib.h>

int main(void){

float a;
float b;
float c;

printf("a: " );
scanf("%f", &a);
printf("b: ");
scanf("%f", &b);
printf("c: ");
scanf("%f", &c);

 if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Verifica o tipo de triângulo
        if (a == b && b == c) {
            printf("Triangulo EQUILATERO");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo ISOSCELES");
        } else {
            printf("Triangulo ESCALENO");
        }
    } else {
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }


    return 0;
}