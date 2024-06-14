#include <stdio.h>
#include <stdlib.h>

int main(void){

int homem1;
int homem2;
int mulher1;
int mulher2;

printf("Idade Homem 1: ");
scanf("%d", &homem1);
printf("Idade Homem 2: ");
scanf("%d", &homem2);
printf("Idade Mulher 1: ");
scanf("%d", &mulher1);
printf("Idade Mulher 2: ");
scanf("%d", &mulher2);
//soma das idades mais velhas
int somaIdades = (homem1 > homem2 ? homem1 : homem2) + (mulher1 < mulher2 ? mulher1 : mulher2);

    // Calcula o produto das idades do homem mais novo com a mulher mais velha
    int mult = (homem1 < homem2 ? homem1 : homem2) * (mulher1 > mulher2 ? mulher1 : mulher2);

    // Exibe os resultados
    printf("Idade homem mais velho + idade mulher mais nova: %d\n", somaIdades);
    printf("Idade homem mais novo * idade mulher mais velha: %d\n", mult);


    return 0;
}