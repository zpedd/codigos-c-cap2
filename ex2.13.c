#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, notaOptativa, media;
    
    // Solicita as notas das avaliações normais e da optativa
    printf("Nota Av.1: ");
    scanf("%f", &nota1);
    printf("Nota Av.2: ");
    scanf("%f", &nota2);
    printf("Nota Optativa: ");
    scanf("%f", &notaOptativa);

    // Verifica se a nota optativa é válida (não negativa)
    if (notaOptativa >= 0) {
        // Substitui a menor nota entre as duas normais pela nota optativa, se a optativa for maior
        if ( notaOptativa > nota2 && nota1 > nota2) {
            media = (notaOptativa + nota1) / 2.0;
        } else if (notaOptativa > nota1 && nota2 > nota1) {
            media = (nota2 + notaOptativa) / 2.0;
        } else {
            media = (nota1 + nota2) / 2.0;
        }
    } else {
        media = (nota1 + nota2) / 2.0;
    }

    // Exibe a média com duas casas decimais
    printf("Media: %.2f\n", media);

    // Verifica se o aluno foi aprovado, reprovado ou está em exame
    if (media >= 6.0) {
        printf("Aprovado!\n");
    } else if (media >= 4.0) {
        printf("Exame.\n");
    } else {
        printf("Reprovado...\n");
    }

    return 0;
}