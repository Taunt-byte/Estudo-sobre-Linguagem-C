/*
  Programa para calcular área de um triângulo: 
  area = (base * altura) / 2 
*/

#include<stdio.h>

int main() /*Início */
{
	float area, base, altura; /* Declaração de variáveis (float = real) */
	
	/*Entrada de dados */
	printf("Informe a base do triangulo.....:");
	scanf("%f",&base);
	printf("Informe a altura do triangulo...:");
	scanf("%f",&altura);
		
	/*Processamento da area do triângulo */
	area = (base * altura)/2;
	
	/*Saída de dados - Resultado */
	printf("\nArea do triangulo = %f",area);
	
	return(0);
} /*Fim */