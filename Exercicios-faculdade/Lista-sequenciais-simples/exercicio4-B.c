/*
Autor: Lucas Neves
Data:09/03/2023

*/



#include <stdio.h>

int main() {
    int fahrenheit, celsius;

    // solicita o valor em Fahrenheit
    printf("Digite um valor em graus Fahrenheit: ");
    scanf("%d", &fahrenheit);

    // converte para Celsius utilizando a fórmula C=(f-32) * (5/9)
    celsius = (fahrenheit - 32) * (5/9);

    // exibe o resultado
    printf("%d graus Fahrenheit correspondem a %d graus Celsius.\n", fahrenheit, celsius);

    return 0;
}
