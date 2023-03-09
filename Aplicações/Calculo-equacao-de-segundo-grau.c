/*
Autor: Lucas Neves
Data:09/03/2023

O programa usa a biblioteca math.h para a função sqrt, que é usada
 para calcular a raiz quadrada do delta. As variáveis do tipo float
  são usadas para armazenar os coeficientes, o delta e as raízes. 
  A função "printf" é usada para exibir o resultado na tela, com duas 
  casas decimais. O programa verifica se a equação tem raízes reais, e 
  exibe uma mensagem de erro caso não tenha.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    // solicita os coeficientes
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // calcula o delta
    delta = b * b - 4 * a * c;

    // verifica se a equação tem raízes reais
    if (delta >= 0) {
        // calcula as raízes
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        // exibe o resultado
        printf("Raizes da equacao: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else {
        // exibe mensagem de erro
        printf("A equacao nao tem raizes reais.\n");
    }

    return 0;
}
