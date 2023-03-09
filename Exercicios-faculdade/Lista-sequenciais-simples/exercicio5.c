/*
Autor: Lucas Neves
Data:09/03/2023

Este programa usa a biblioteca matemática "math.h" para calcular a raiz quadrada e o seno. 
Note que a função "pow" é usada para elevar o segundo número ao quadrado na operação de produto. 
O formato "%.2f" é usado para exibir os resultados com duas casas decimais.
*/


#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    float soma, produto, quadrado1, raiz_quadrada, seno, modulo;

    // solicita os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // realiza as operações
    soma = num1 + num2;
    produto = num1 * pow(num2, 2);
    quadrado1 = pow(num1, 2);
    raiz_quadrada = sqrt(pow(num1, 2) + pow(num2, 2));
    seno = sin(num1 - num2);
    modulo = fabs(num1);

    // exibe os resultados
    printf("A soma dos números é: %.2f\n", soma);
    printf("O produto do primeiro número pelo quadrado do segundo é: %.2f\n", produto);
    printf("O quadrado do primeiro número é: %.2f\n", quadrado1);
    printf("A raiz quadrada da soma dos quadrados é: %.2f\n", raiz_quadrada);
    printf("O seno da diferença do primeiro número pelo segundo é: %.2f\n", seno);
    printf("O módulo do primeiro número é: %.2f\n", modulo);

    return 0;
}
