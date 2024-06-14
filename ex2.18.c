#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    float num1, num2, resultado;
    char operacao;

    // Solicita os dois números decimais ao usuário
    printf("Digite o primeiro numero decimal: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero decimal: ");
    scanf("%f", &num2);

    // Exibe o menu de operações
    printf("\nEscolha a operacao:\n");
    printf("+) Adicao\n");
    printf("-) Subtracao\n");
    printf("*) Multiplicacao\n");
    printf("/) Divisao\n");
    printf("Opcao: ");
    scanf(" %c", &operacao); // Usa espaço antes do %c para consumir o caractere de nova linha

    // Verifica a operação escolhida pelo usuário e realiza o cálculo correspondente
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n",num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n",num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n",num1, num2, resultado);
            } 
            break;
        default:
            printf("Opcao invalida!");
            break; 
    }

    return 0;
}