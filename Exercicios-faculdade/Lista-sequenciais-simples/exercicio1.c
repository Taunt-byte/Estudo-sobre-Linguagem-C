/*
Autor: Lucas Neves
Data:09/03/2023

O programa usa variáveis do tipo float para armazenar os valores de metros, decímetros, 
centímetros e milímetros, e faz as conversões correspondentes multiplicando o valor em metros 
por 10, 100 e 1000, respectivamente. 
A função "printf" é usada para exibir os resultados na tela.
*/


#include <stdio.h>

int main() {
    float metros, decimetros, centimetros, milimetros;

    // solicita o valor em metros
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    // converte para decímetros, centímetros e milímetros
    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    // exibe os resultados
    printf("%.2f metros correspondem a %.2f decímetros.\n", metros, decimetros);
    printf("%.2f metros correspondem a %.2f centímetros.\n", metros, centimetros);
    printf("%.2f metros correspondem a %.2f milímetros.\n", metros, milimetros);

    return 0;
}
