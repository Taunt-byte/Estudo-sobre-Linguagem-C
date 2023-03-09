/*
Autor: Lucas Neves
Data:09/03/2023

O programa usa a função "sqrt" da biblioteca math.h para calcular a raiz quadrada 
do número informado pelo usuário, e variáveis do tipo float para armazenar o número 
e a raiz quadrada. A função "printf" é usada para exibir o resultado na tela, com duas casas decimais.

*/


#include <stdio.h>
#include <math.h>

int main() {
    float num, raiz;

    // solicita o número
    printf("Digite um numero: ");
    scanf("%f", &num);

    // calcula a raiz quadrada
    raiz = sqrt(num);

    // exibe o resultado
    printf("Raiz quadrada de %.2f = %.2f\n", num, raiz);

    return 0;
}

