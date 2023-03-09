/*
Autor: Lucas Neves
Data:09/03/2023

O programa usa variáveis do tipo char para armazenar a operação escolhida pelo usuário, 
e variáveis do tipo float para armazenar os números informados e o resultado da operação. 
A função "switch" é usada para executar a operação correspondente à escolha do usuário, exibindo 
o resultado na tela com duas casas decimais. 
Se a operação escolhida for inválida ou se houver uma tentativa de divisão por zero, 
o programa exibe uma mensagem de erro.
*/

#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    // solicita a operação e os números
    printf("Digite a operação (+, -, *, /): ");
    scanf("%c", &operacao);
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // realiza a operação escolhida
    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Erro: operação inválida!\n");
            break;
    }

    return 0;
}
