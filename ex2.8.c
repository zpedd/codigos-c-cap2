#include <stdio.h>
#include <stdlib.h>

int main(void){

float n1;
float n2;
float n3;
float var1;
float var2;
float var3;
float var4;
float var5;
float var6;


printf("forneca 3 numeros");
scanf("%f", &n1);
scanf("%f", &n2);
scanf("%f", &n3);

var1= n1 + n2;
var2= n1 + n3;
var3= n2 + n1;
var4= n2 + n3;
var5= n3 + n1;
var6= n3 + n2;

if(n1 >= n2 && n2 >= n3){
    printf("A soma dos dois numeros maiores fornecidos e %.2f", var1 );
}else if(n1 >= n3 && n3 >= n2){
    printf("A soma dos dois numeros maiores fornecidos e %.2f", var2 );
}else if(n2 >= n1 && n1 >= n3){
    printf("A soma dos dois numeros maiores fornecidos e %.2f", var3 );
}else if(n2 >= n3 && n3 >= n1){
    printf("A soma dos dois numeros maiores fornecidos e %.2f", var4 );
}else if(n3 >= n1 && n1 >= n2){
    printf("A soma dos dois numeros maiores fornecidos e %.2f", var5 );
}else if(n3 >= n2 && n3 >= n1){
    printf("A soma dos dois numeros maiores fornecidos e %.2f", var6 );
}

    return 0;
}