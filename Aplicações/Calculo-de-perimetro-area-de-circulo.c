/*
Autor: Lucas Neves
Data:09/03/2023

O programa usa a constante PI (3.14159) definida por meio da diretiva "#define", 
e variáveis do tipo float para armazenar o raio, o perímetro e a área. A função "printf" 
é usada para exibir o resultado na tela, com duas casas decimais. 
O cálculo do perímetro é feito multiplicando o raio por 2 e por PI, e o cálculo da área
é feito multiplicando o raio ao quadrado por PI.
*/




#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, perimetro, area;

    // solicita o raio
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    // calcula o perímetro e a área
    perimetro = 2 * PI * raio;
    area = PI * raio * raio;

    // exibe o resultado
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);

    return 0;
}
