#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float cel;
    float fah;
    float resultado;
    char opcao;

    // Exibe o menu de opções
    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("C) Celsius -> Fahrenheit\n");
    printf("F) Fahrenheit -> Celsius\n");
    printf("Opcao: ");
    scanf("  %c", &opcao); // Lê a opção como caractere, com espaço antes do %c para evitar problemas com o buffer
    
    // Verifica a opção escolhida pelo usuário
    switch (opcao) {
        case 'C':
            // Solicita a temperatura em Celsius
            printf("Entre com a temperatura em graus Celsius: ");
            scanf("%f", &cel);
            // Converte Celsius para Fahrenheit e exibe o resultado
            resultado = (cel * 1.8) + 32;
            printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit\n", cel, resultado);
            break;
        case 'F':
            // Solicita a temperatura em Fahrenheit
            printf("Entre com a temperatura em graus Fahrenheit: ");
            scanf("%f", &fah);
            // Converte Fahrenheit para Celsius e exibe o resultado
            resultado = (fah - 32) / 1.8;
            printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius\n", fah, resultado);
            break;
    default:
            printf("Opcao invalida!");
            break;
    }

    return 0;
}