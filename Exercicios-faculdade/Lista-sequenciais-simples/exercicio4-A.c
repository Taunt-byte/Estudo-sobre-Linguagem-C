#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    // solicita o valor em Fahrenheit
    printf("Digite um valor em graus Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // converte para Celsius utilizando a fórmula C=(f-32.0) * (5.0/9.0)
    celsius = (fahrenheit - 32.0) * (5.0/9.0);

    // exibe o resultado
    printf("%.2lf graus Fahrenheit correspondem a %.2lf graus Celsius.\n", fahrenheit, celsius);

    return 0;
}
