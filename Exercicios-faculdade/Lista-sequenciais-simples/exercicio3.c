/*
Autor: Lucas Neves
Data:09/03/2023

O formato de conversão "%X" é usado para exibir o número em hexadecimal, em letras maiúsculas. 
Já o formato de conversão "%o" é usado para exibir o número em octal.
*/

#include <stdio.h>

int main() {
    int decimal;

    // solicita o número decimal
    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    // exibe o número em hexadecimal e octal
    printf("O número decimal %d em hexadecimal é %X.\n", decimal, decimal);
    printf("O número decimal %d em octal é %o.\n", decimal, decimal);

    return 0;
}
