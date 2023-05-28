/*
Autor: Lucas Neves
Data:09/03/2023

O programa usa variáveis do tipo float para armazenar os valores de peso, altura e IMC, 
e faz o cálculo do IMC dividindo o peso pela altura ao quadrado. A função "printf" é usada 
para exibir o resultado do IMC na tela, com duas casas decimais. 
Em seguida, um conjunto de "if/else" é usado para verificar em que faixa de peso o IMC se encontra,
 e exibir uma mensagem correspondente.
*/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    // solicita o peso e altura
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    // calcula o IMC
    imc = peso / (altura * altura);

    // exibe o resultado
    printf("O IMC é: %.2f\n", imc);

    // verifica a faixa de peso
    if (imc < 18.5) {
        printf("Abaixo do peso.\n");
    } else if (imc < 25) {
        printf("Peso normal.\n");
    } else if (imc < 30) {
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidade.\n");
    }

    return 0;
}
